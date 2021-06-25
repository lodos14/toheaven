# SerBot 주행
![1](https://user-images.githubusercontent.com/81665608/123358514-940b7b80-d5a6-11eb-887b-4fa089b2f79c.PNG)
![2](https://user-images.githubusercontent.com/81665608/123358519-953ca880-d5a6-11eb-9444-6bd7275cdfef.PNG)
![3](https://user-images.githubusercontent.com/81665608/123358520-95d53f00-d5a6-11eb-9c6c-edba15b6bfeb.PNG)
![4](https://user-images.githubusercontent.com/81665608/123358523-95d53f00-d5a6-11eb-8cf3-5bcb7d30c544.PNG)
![5](https://user-images.githubusercontent.com/81665608/123358526-966dd580-d5a6-11eb-8b8c-56762f18eb70.PNG)
![6](https://user-images.githubusercontent.com/81665608/123358527-97066c00-d5a6-11eb-8f2c-1f55c0c1c99c.PNG)


<pre>
<code>

from pop import LiDAR, Pilot
import time
from gtts import gTTS
import subprocess
import threading
import random
from gtts import gTTS
import subprocess
from popAssist import *

SPEED = 30
direction = 0  
area_num = 8   
offset = (360/area_num)/2
area_check = [360-offset, offset]
lidar = LiDAR.Rplidar()
bot = Pilot.SerBot()
lidar.connect()
lidar.startMotor()
bot.setSpeed(SPEED)
bot_user_action = 0
power = True

#----------------------------------------------------------------------------------
    # 사용자 목소리 및 컴퓨터 제어
#----------------------------------------------------------------------------------

def userAction(text):

    global bot_user_action
    voice_output = ""
    bot_action_voice={0:"다시말해주세요", 1:"출발합니다", 2:"정지합니다", 3:"종료합니다"}

    if '출발' in text:

        bot_user_action = 1
        
    elif "정지" in text:

        bot_user_action = 2
        
    elif "종료" in text:

        bot_user_action = 3

    else :

        voice_output = bot_action_voice[0]

    if not voice_output :

        voice_output = bot_action_voice[bot_user_action]
    
    filename = "en_tts.mp3"
    tts=gTTS(voice_output, lang="ko")  
    tts.save(filename)

    with subprocess.Popen(['play', filename]) as p:
        p.wait()
        
    return True


def onStart():
    print(">>> Start recording...")

def GAssistant_func() :
    steam = create_conversation_stream()
    ga = GAssistant(steam, local_device_handler=userAction)

    while True:
        ga.assist(onStart)

        if bot_user_action == 3 : break

def Computer_action():

    global bot_user_action

    while True :

        bot_user_action = int(input("[1]출발, [2]정지, [3]종료 >> "))
  
        voice_output = ""

        bot_action_voice={0:"다시말해주세요", 1:"출발합니다", 2:"정지합니다", 3:"종료합니다"}

        voice_output = bot_action_voice[bot_user_action]
        filename = "en_tts.mp3"
        tts=gTTS(voice_output, lang="ko")  
        tts.save(filename)

        with subprocess.Popen(['play', filename]) as p:
            p.wait()

        if bot_user_action == 3 : break
#----------------------------------------------------------------------------------
    # 운행중 운행 방향의 장애물 체크
#----------------------------------------------------------------------------------

def running_Obstacle_check(offset_direction_min, offset_direction_max ):

    global collision
    bot_user_action = 1
    vectors = lidar.getVectors()

    for v in vectors:    

        degree = v[0] 
        distance = v[1]
            

        if area_check[0] <= direction < 360 or 0 <= direction < area_check[1]:
            
            if offset_direction_min <degree < 360 or 0 <= degree < offset_direction_max:
                
                if distance <= 450:
                    collision = True
                    bot.stop()                
                    return True

        else:

            if direction-offset <= degree < direction+offset:

                if distance <= 450:
                    collision = True
                    bot.stop()                      
                    return True

    return False

#----------------------------------------------------------------------------------
    # 운행 방향 기준으로 입력한 구역수로 나누기
#----------------------------------------------------------------------------------

def Area_sortation(offset_direction_1, offset_direction_2) :

    area_dic={}

    for num in range(0, area_num):
        
        area_dic[num+1] = [(offset_direction_1 +(num*offset*2))%360, (offset_direction_2 +(num*offset*2))%360]

    return area_dic

#----------------------------------------------------------------------------------
    # 운행 방향 기준으로 나눈 구역구간별 라이다 데이터 가져오기
#----------------------------------------------------------------------------------

def Get_area_lidar_data(area_dic) :

    distance_dic = {}
    vectors = lidar.getVectors()

    for n in range(1, area_num+1):

        distance_dic[n]=[]
                
        for v in vectors:

            degree = v[0] 
            distance = v[1]

            if area_dic[n][0] + (360/area_num) > 360:
                 
                if degree >= area_dic[n][0]:
                    distance_dic[n].append(distance)
                                
                if degree <= area_dic[n][1]:
                    distance_dic[n].append(distance)
                                      
            else:
                
                if area_dic[n][0] <= degree < area_dic[n][1]:                  
                    distance_dic[n].append(distance)
                     
    return distance_dic

#----------------------------------------------------------------------------------
    # 운행 가능한 구역 탐색
#----------------------------------------------------------------------------------

def Run_possible_area_navigation(distance_dic) :

    run_possible_area_list=[]
  
    for n in range(1, area_num):
             
        if distance_dic[n] and min(distance_dic[n])>550.0:   
    
            run_possible_area_list.append(n)

    return run_possible_area_list

#----------------------------------------------------------------------------------
    # 운행 가능한 구역 중 랜덤으로 방향 정하기
#----------------------------------------------------------------------------------

def Direction_choice(area_dic,run_possible_area_list) :

    global direction

    choiceList = random.choice(run_possible_area_list)

    left_direction = int(area_dic[choiceList][0])

    right_direction = int(area_dic[choiceList][1])

    if left_direction > right_direction :
                 
        left_direction, right_direction = right_direction ,left_direction
          
    direction = random.randint(left_direction, right_direction)

#----------------------------------------------------------------------------------
    # 함수 실행 매니저
#----------------------------------------------------------------------------------

def Run_manager(offset_direction_1, offset_direction_2):

    run_possible_area_list = []

    while not run_possible_area_list :
        
        Stop_and_Power()

        area_dic = Area_sortation(offset_direction_1, offset_direction_2)
            
        distance_dic = Get_area_lidar_data(area_dic)
        
        run_possible_area_list = Run_possible_area_navigation(distance_dic)

    Direction_choice(area_dic, run_possible_area_list)

#----------------------------------------------------------------------------------
    # 사용자 입력 제어에 대한 판단 
#----------------------------------------------------------------------------------

def Stop_and_Power():
    global power
    
    if bot_user_action == 2 :
        bot.stop()

        while True :
            
            if bot_user_action == 1 or 3 :
                break

    elif bot_user_action == 3 :

        power = False

#----------------------------------------------------------------------------------
    # 메인 함수
#----------------------------------------------------------------------------------

def Main() :

    C = threading.Thread(target = Computer_action)
    C.start()

    #a=threading.Thread(target=GAssistant_func)
    #a.start()

    bot.stop()
    print("운행준비 완료")
    while power :
        
        offset_direction_1 = direction-offset
        offset_direction_2 = direction+offset
        offset_direction_min = (direction-offset)%360
        offset_direction_max = (direction+offset)%360

        if bot_user_action == 1 :

            if running_Obstacle_check(offset_direction_1, offset_direction_2) :

                Run_manager(offset_direction_min, offset_direction_max)
                    
            bot.move(direction, 50)

        Stop_and_Power()

        # bot_user_action 이랑 컴퓨터 나누지말고 그냥 하나 변수를 같이 쓰면됨
        
    lidar.stopMotor()
    bot.stop()
    print("프로그램을 종료합니다")

    

if __name__ == "__main__" :
    Main()
    
<pre>
<code>

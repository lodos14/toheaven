import BlynkLib
from subprocess import Popen, PIPE
blynk = BlynkLib.Blynk('lXiETTgyDe7YxG9coAq5bFXya122tnKT') #프로젝트를 생성할 때 메일로 받은 인증 코드
def get_cpu_temp():
    with Popen(['cat', '/sys/class/thermal/thermal_zone0/temp'], stdout=PIPE) as p:
        out, err = p.communicate() #out = "55687"
        return float("%.2f"%(int(out)/1000))
@blynk.VIRTUAL_READ(0) #모바일 앱의 게이지 위젯은 가상 포트0 사용
def on_cpu_temp():
    temp = get_cpu_temp()
    blynk.virtual_write(0, temp)


blynk.run()
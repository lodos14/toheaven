/*

=== 메뉴 ===
1. 노래추가
2. 노래검색
3. 노래듣기
4. 노래목록
5. 종료
============
메뉴 =

== 노래추가 ==
가수 =
노래제목 =
==============
노래를 추가하였습니다.


== 노래검색 ==
노래제목 :
-----------------------
1. 노래듣기 2. 뒤로가기
          or
일치하는 노래가 없습니다.


== 노래듣기 ==
노래제목 : 000
가수 : 000
------------------------------------------------
[1] 다음곡 [2] 이전곡 [3] 일시정지 [4] 재생 [5] 노래듣기 종료

== 노래목록 ==
1. 가수1 : 제목1
2. 가수2 : 제목2
3. 가수3 : 제목3

--------------------
esc! 입력 시 뒤로가기
노래 듣기 번호 입력 :

*/


#include<iostream>
#include<string>
#include<thread>
#include<ctime>
#include<Windows.h>

using namespace std;

// 노래듣기를 보조하는 변수 및 함수 선언
int play_select;
bool input_play_check = false;
bool input_play_state_to_music_Time;

void listenMusic_sub_func_input_play();
void listenMusic_sub_func_input_play_thread();
void listenMusic_sub_func_disp(string s, string m, int play_select, int music_time);
int listenMusic_sub_func_music_Time(string s, string m);

// Music 클래스
class Music {

    string singer;                     // 가수
    string music_name;                 // 노래제목

public:

    Music(string singer, string music_name);

    string getSinger();

    string getMusic_name();

    void music_Info();

};

//

Music::Music(string s, string m)

    :singer(s), music_name(m) {}

// 가수를 가져옴 
string Music::getSinger() { return singer; }                  

// 노래제목을 가져옴
string Music::getMusic_name() { return music_name; }    

// 가수와 노래 제목을 출력    
void Music::music_Info() {                                              

    cout << getSinger() << " : " << getMusic_name() << endl;

}

// Manager 클래스
class MusicManager {

    Music* music_list[20];       // 객체동적배열
    int music_num;

public:

    MusicManager();

    int menu();                  // 메뉴

    void addMusic();             // 노래추가

    int serchMusic();            // 노래검색

    void listenMusic(int n);     // 노래듣기

    void showAllMusic();         // 노래목록

    ~MusicManager() {            // 동적할당 반환
        for (int i = 0; 0 < music_num; i++)
            delete music_list[i];
    }

};

// Manager클래스 구현부
MusicManager::MusicManager()

    : music_num(0) {}

// 메뉴
int MusicManager::menu() {                 

    int menu_num;

    // 메뉴출력
    cout << "=== 메뉴 ===" << endl;
    cout << "1. 노래추가" << endl;
    cout << "2. 노래검색" << endl;
    cout << "3. 노래듣기" << endl;
    cout << "4. 노래목록" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "=================" << endl;
    cout << "메뉴 = ";
    cin >> menu_num;
    cout << endl;

    return menu_num;

}

// 노래추가
void MusicManager::addMusic() {          

    string input_singer;
    string input_music;

    cin.ignore();  

    // 사용자 입력을 통해  노래 추가
    cout << "== 노래추가==" << endl;
    cout << "가수 = ";
    getline(cin, input_singer);
    cout << "노래제목 = ";
    getline(cin, input_music);

    music_list[music_num++] = new Music(input_singer, input_music);

    cout << "노래를 추가했습니다.\n" << endl;

}

// 노래검색
int MusicManager::serchMusic() {             


    string input_music_name;
    int serch_result;
    int select;
    cin.ignore();

    // 사용자 입력
    cout << "== 노래검색 ==" << endl;             
    cout << "노래제목 = ";
    getline(cin, input_music_name);

    // 사용자가 입력한 노래를 찾는 과정
    for (int i = 0; i < music_num; i++) {   
        
        // 사용자가 검색한 노래가 있다면
        if (input_music_name == music_list[i]->getMusic_name()) {  

            serch_result = i+1;

            // 검색결과 출력
            cout << "\n-- 검색결과 --" << endl;                    
            cout << serch_result << ". ";
            music_list[i]->music_Info();
            cout << "-------------------------" << endl;

            // 노래를 들을 것인지 아닌지를 입력받아
            cout << "[1]노래듣기 [2]뒤로가기 = ";                  
            cin >> select;

            // 노래를 듣기를 한다면 검색결과를 매개변수로 노래듣기 진행
            if (select == 1) {                                    
                listenMusic(i);

                return 0;

            }
            // 노래를 듣지 않는다면 메뉴로 리턴
            else return 0;                                        

        }

    }

    // 검색한 노래가 없다면 메시지 출력 메뉴로 이동
    cout << "결과없음.\n" << endl;                               

}

// 노래듣기
void MusicManager::listenMusic(int n = 0) {

    int music_time_check_result;  // 노래재생 시간이 끝나서 다음곡을 재생 명령을 내리는 것인지
                                  // 사용자의 제어에 의해서 다음곡이나 이전곡의 재생을 명령하는 것인지 판단한 결과
    string music_name, singer;

    while (true) {

        // 판단한 결과 및 판단을 보조하는 변수 초기화
        music_time_check_result = 0;     
        input_play_state_to_music_Time = false;

        // 재생할 노래와 가수 불러오기
        music_name = music_list[n]->getMusic_name();
        singer = music_list[n]->getSinger();

        // 노래 재생중에 사용자 제어를 받기 위한 함수
        listenMusic_sub_func_input_play_thread();

        // 노래를 실행하고 노래 재생 명령을 판단한 결과를 받음 (1. 재생시간이 끝났거나 2. 사용자가 제어 했거나)
        music_time_check_result = listenMusic_sub_func_music_Time(singer, music_name);

        // 판단한 결과가 재생시간이 끝난것이라면
        if (music_time_check_result == 1) {

            // 다음곡 index를 담고
            n++;

            // 만약 곡의 끝 번호라면 처음 곡의 index를 담음
            if (n == music_num)  n = 0;
        }

        // 판단한 결과가 사용자의 제어에 의해서 명령을 내린것이라면
        else if (music_time_check_result == 2) {

            // 다음곡 index를 담거나
            if (play_select == 1) {

                n++;
                if (n == music_num)  n = 0;

            }
            // 이전곡의 index를 담고
            else if (play_select == 2) {

                // 재생했던 노래가 처음곡 이라면 마지막 곡 index를 담음
                if (n == 0) {

                    n = music_num - 1;

                }

                else --n;

            }
            
            // 명령이 종료라면 메뉴로 돌아감
            else if (play_select == 5) break; 


        }


    }


}

// 노래목록
void MusicManager::showAllMusic() {
    int num;

    // 노래목록을 출력
    cout << " == 노래목록 == " << endl;
    for (int i = 0; i < music_num; i++) {

        cout << i + 1 << ". ";
        music_list[i]->music_Info();

    }
    cout << "-------------------" << endl;
    cout << "뒤로가기 0번" << endl;
    cout << "노래 듣기 번호 입력 = ";

    // 노래를 선택해 들을 것인지 사용자 입력
    cin >> num;
    cout << endl;

    // 입력이 0이면 메뉴로 돌아가기
    if (num == 0) return;

    // 노래번호를 선택했다면 해당하는 노래에 대한 index를 listenMusic로 넘겨주고 노래실행
    else if (num - 1 < music_num) listenMusic(num - 1);


}

// 보조함수 구현부

// 재생중에 사용자가 명령을 내리는 함수
void listenMusic_sub_func_input_play() {

    int num;

    cin >> num;
    play_select = num;

    // 재생중에 다음곡이나 이전곡, 종료 명령을 내리면
    if (play_select == 1 || play_select == 2 || play_select == 5)

        // 사용자의 제어에 의해서 현재곡 재생정지를 하라는 판단을 하도록 true
        input_play_state_to_music_Time = true;
    
    // 일시정지나 재생 명령을 내린다면 false를 주어 현재곡 재생을 정지하지 않아도 된다라는 판단을 하도록 해준다
    else
        input_play_state_to_music_Time = false;

    // 재생중 사용자 입력이 thread방식으로 진행이 되기 때문에
    // 반복문 안에서 중복 실행이 되지 않도록 하는 장치

    input_play_check = false; // 사용자가 입력을 했으니 이 함수의 실행 준비가 됐다

}

// 재생중 사용자 입력을 제어하는 함수
void listenMusic_sub_func_input_play_thread() {

    // thread중복 실행 여부를 확인하고 중복 실행이 아니라면
    if (input_play_check == false) {

        // true로 바꾸어 중복실행을 방지
        input_play_check = true;

        // 재생중 사용자 입력을 thread로 실행
        thread t1(listenMusic_sub_func_input_play);

        t1.detach();
    }
}

// 재생화면을 출력하는 함수
void listenMusic_sub_func_disp(string s, string m, int play_select, int music_time) {


    cout << "\n\n\n\n\n\n\n\n\n\n\n\n노래제목 : " << s << endl;
    cout << " 가 수  : " << m << endl;

    // 일시정지 명령을 받으면 정지 화면을
    if (play_select == 3) {
        cout << "----------------------------------------------------------일시정지 " << "0.0" << music_time << endl;
    }
    // 재생중이라면 재생 화면을 출력
    else
        cout << "----------------------------------------------------------재생중 " << "0.0" << music_time << endl;

    cout << "[1]다음곡 [2]이전곡 [3]일시정지 [4]재생 [5]노래듣기 종료\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;

}

// 재생 시간제어와 사용자 명령을 판단하는 함수
int listenMusic_sub_func_music_Time(string s, string m) {

    clock_t start = 0;
    clock_t finish = 0;
    clock_t offset_1 = 0;
    clock_t offset_2 = 0;
    clock_t offset_3 = 0;
    clock_t offset = 0;
    int music_time = 0;

    // 재생 시작 시간 체크
    start = clock();


    while (true) {

        // 재생화면 출력
        listenMusic_sub_func_disp(s, m, play_select, music_time);

        // 1초마다 시간 측정
        finish = clock();

        // 화면에 노래 재생시간을 표시하기 위한 계산
        music_time = (int)(finish - start - offset) / 1000;

        // 1초 딜레이
        Sleep(1000);

        // 사용자가 일시정지를 누르면
        if (play_select == 3) {
            
            // 일시정지 화면 출력
            listenMusic_sub_func_disp(s, m, play_select, music_time);

            // 일시 정지된 시간을 측정하기 위해 일시 정지 시작 시간을 기록
            offset_1 = clock();

            while (true) {
                
                // 사용자 입력 thread 실행
                listenMusic_sub_func_input_play_thread();

                Sleep(100);

                // 재생이나 종료 명령을 받으면 반복문 해제
                if (play_select == 4 || play_select == 5) break;

            }

            // 일시정지가 끝난 시점 시간 시록
            offset_2 = clock();

            // 일시정지된 시간 계산
            offset_3 = offset_2 - offset_1;

            // 재생시간 보정
            // 한 곡에서 여러번  일시정지 할 수도 있으니 일시정지 시간 누적
            offset += offset_3;

        }

        // 만약 종료명령이 아니라면 재생중 사용자 입력을 위해 thread 실행
        if (play_select != 5) listenMusic_sub_func_input_play_thread();

        // 모든 곡의 재생 시간을 9초라고 가정
        // 재생 시간이 끝나면 재생시간이 끝났으니 다음 곡의 index를 달라는 판단을 반환
        if (music_time > 9) {

            return 1;
        }

        // 사용자 제어가 있으면
        // 사용자의 제어에 의해서 현재곡을 중단하고 제어에 따라 실행할 노래를 달라는 판단을 반환
        else if (input_play_state_to_music_Time) return 2;

    }

}

// 프로그램 실행
int main() {

    MusicManager manager;
    int menu_input;

    while (true) {

        menu_input = manager.menu();

        switch (menu_input) {

        case 1: manager.addMusic(); break;

        case 2: manager.serchMusic(); break;

        case 3: manager.listenMusic(); break;

        case 4: manager.showAllMusic(); break;

        case 5: return 0;

        default: {
            cout << "메뉴를 잘못 입력했습니다.\n" << endl;

        }

        }

    }

    return 0;

}



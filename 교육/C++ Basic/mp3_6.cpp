/*

=== �޴� ===
1. �뷡�߰�
2. �뷡�˻�
3. �뷡���
4. �뷡���
5. ����
============
�޴� =

== �뷡�߰� ==
���� =
�뷡���� =
==============
�뷡�� �߰��Ͽ����ϴ�.


== �뷡�˻� ==
�뷡���� :
-----------------------
1. �뷡��� 2. �ڷΰ���
          or
��ġ�ϴ� �뷡�� �����ϴ�.


== �뷡��� ==
�뷡���� : 000
���� : 000
------------------------------------------------
[1] ������ [2] ������ [3] �Ͻ����� [4] ��� [5] �뷡��� ����

== �뷡��� ==
1. ����1 : ����1
2. ����2 : ����2
3. ����3 : ����3

--------------------
esc! �Է� �� �ڷΰ���
�뷡 ��� ��ȣ �Է� :

*/


#include<iostream>
#include<string>
#include<thread>
#include<ctime>
#include<Windows.h>

using namespace std;

// �뷡��⸦ �����ϴ� ���� �� �Լ� ����
int play_select;
bool input_play_check = false;
bool input_play_state_to_music_Time;

void listenMusic_sub_func_input_play();
void listenMusic_sub_func_input_play_thread();
void listenMusic_sub_func_disp(string s, string m, int play_select, int music_time);
int listenMusic_sub_func_music_Time(string s, string m);

// Music Ŭ����
class Music {

    string singer;                     // ����
    string music_name;                 // �뷡����

public:

    Music(string singer, string music_name);

    string getSinger();

    string getMusic_name();

    void music_Info();

};

//

Music::Music(string s, string m)

    :singer(s), music_name(m) {}

// ������ ������ 
string Music::getSinger() { return singer; }                  

// �뷡������ ������
string Music::getMusic_name() { return music_name; }    

// ������ �뷡 ������ ���    
void Music::music_Info() {                                              

    cout << getSinger() << " : " << getMusic_name() << endl;

}

// Manager Ŭ����
class MusicManager {

    Music* music_list[20];       // ��ü�����迭
    int music_num;

public:

    MusicManager();

    int menu();                  // �޴�

    void addMusic();             // �뷡�߰�

    int serchMusic();            // �뷡�˻�

    void listenMusic(int n);     // �뷡���

    void showAllMusic();         // �뷡���

    ~MusicManager() {            // �����Ҵ� ��ȯ
        for (int i = 0; 0 < music_num; i++)
            delete music_list[i];
    }

};

// ManagerŬ���� ������
MusicManager::MusicManager()

    : music_num(0) {}

// �޴�
int MusicManager::menu() {                 

    int menu_num;

    // �޴����
    cout << "=== �޴� ===" << endl;
    cout << "1. �뷡�߰�" << endl;
    cout << "2. �뷡�˻�" << endl;
    cout << "3. �뷡���" << endl;
    cout << "4. �뷡���" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "=================" << endl;
    cout << "�޴� = ";
    cin >> menu_num;
    cout << endl;

    return menu_num;

}

// �뷡�߰�
void MusicManager::addMusic() {          

    string input_singer;
    string input_music;

    cin.ignore();  

    // ����� �Է��� ����  �뷡 �߰�
    cout << "== �뷡�߰�==" << endl;
    cout << "���� = ";
    getline(cin, input_singer);
    cout << "�뷡���� = ";
    getline(cin, input_music);

    music_list[music_num++] = new Music(input_singer, input_music);

    cout << "�뷡�� �߰��߽��ϴ�.\n" << endl;

}

// �뷡�˻�
int MusicManager::serchMusic() {             


    string input_music_name;
    int serch_result;
    int select;
    cin.ignore();

    // ����� �Է�
    cout << "== �뷡�˻� ==" << endl;             
    cout << "�뷡���� = ";
    getline(cin, input_music_name);

    // ����ڰ� �Է��� �뷡�� ã�� ����
    for (int i = 0; i < music_num; i++) {   
        
        // ����ڰ� �˻��� �뷡�� �ִٸ�
        if (input_music_name == music_list[i]->getMusic_name()) {  

            serch_result = i+1;

            // �˻���� ���
            cout << "\n-- �˻���� --" << endl;                    
            cout << serch_result << ". ";
            music_list[i]->music_Info();
            cout << "-------------------------" << endl;

            // �뷡�� ���� ������ �ƴ����� �Է¹޾�
            cout << "[1]�뷡��� [2]�ڷΰ��� = ";                  
            cin >> select;

            // �뷡�� ��⸦ �Ѵٸ� �˻������ �Ű������� �뷡��� ����
            if (select == 1) {                                    
                listenMusic(i);

                return 0;

            }
            // �뷡�� ���� �ʴ´ٸ� �޴��� ����
            else return 0;                                        

        }

    }

    // �˻��� �뷡�� ���ٸ� �޽��� ��� �޴��� �̵�
    cout << "�������.\n" << endl;                               

}

// �뷡���
void MusicManager::listenMusic(int n = 0) {

    int music_time_check_result;  // �뷡��� �ð��� ������ �������� ��� ����� ������ ������
                                  // ������� ��� ���ؼ� �������̳� �������� ����� ����ϴ� ������ �Ǵ��� ���
    string music_name, singer;

    while (true) {

        // �Ǵ��� ��� �� �Ǵ��� �����ϴ� ���� �ʱ�ȭ
        music_time_check_result = 0;     
        input_play_state_to_music_Time = false;

        // ����� �뷡�� ���� �ҷ�����
        music_name = music_list[n]->getMusic_name();
        singer = music_list[n]->getSinger();

        // �뷡 ����߿� ����� ��� �ޱ� ���� �Լ�
        listenMusic_sub_func_input_play_thread();

        // �뷡�� �����ϰ� �뷡 ��� ����� �Ǵ��� ����� ���� (1. ����ð��� �����ų� 2. ����ڰ� ���� �߰ų�)
        music_time_check_result = listenMusic_sub_func_music_Time(singer, music_name);

        // �Ǵ��� ����� ����ð��� �������̶��
        if (music_time_check_result == 1) {

            // ������ index�� ���
            n++;

            // ���� ���� �� ��ȣ��� ó�� ���� index�� ����
            if (n == music_num)  n = 0;
        }

        // �Ǵ��� ����� ������� ��� ���ؼ� ����� �������̶��
        else if (music_time_check_result == 2) {

            // ������ index�� ��ų�
            if (play_select == 1) {

                n++;
                if (n == music_num)  n = 0;

            }
            // �������� index�� ���
            else if (play_select == 2) {

                // ����ߴ� �뷡�� ó���� �̶�� ������ �� index�� ����
                if (n == 0) {

                    n = music_num - 1;

                }

                else --n;

            }
            
            // ����� ������ �޴��� ���ư�
            else if (play_select == 5) break; 


        }


    }


}

// �뷡���
void MusicManager::showAllMusic() {
    int num;

    // �뷡����� ���
    cout << " == �뷡��� == " << endl;
    for (int i = 0; i < music_num; i++) {

        cout << i + 1 << ". ";
        music_list[i]->music_Info();

    }
    cout << "-------------------" << endl;
    cout << "�ڷΰ��� 0��" << endl;
    cout << "�뷡 ��� ��ȣ �Է� = ";

    // �뷡�� ������ ���� ������ ����� �Է�
    cin >> num;
    cout << endl;

    // �Է��� 0�̸� �޴��� ���ư���
    if (num == 0) return;

    // �뷡��ȣ�� �����ߴٸ� �ش��ϴ� �뷡�� ���� index�� listenMusic�� �Ѱ��ְ� �뷡����
    else if (num - 1 < music_num) listenMusic(num - 1);


}

// �����Լ� ������

// ����߿� ����ڰ� ����� ������ �Լ�
void listenMusic_sub_func_input_play() {

    int num;

    cin >> num;
    play_select = num;

    // ����߿� �������̳� ������, ���� ����� ������
    if (play_select == 1 || play_select == 2 || play_select == 5)

        // ������� ��� ���ؼ� ����� ��������� �϶�� �Ǵ��� �ϵ��� true
        input_play_state_to_music_Time = true;
    
    // �Ͻ������� ��� ����� �����ٸ� false�� �־� ����� ����� �������� �ʾƵ� �ȴٶ�� �Ǵ��� �ϵ��� ���ش�
    else
        input_play_state_to_music_Time = false;

    // ����� ����� �Է��� thread������� ������ �Ǳ� ������
    // �ݺ��� �ȿ��� �ߺ� ������ ���� �ʵ��� �ϴ� ��ġ

    input_play_check = false; // ����ڰ� �Է��� ������ �� �Լ��� ���� �غ� �ƴ�

}

// ����� ����� �Է��� �����ϴ� �Լ�
void listenMusic_sub_func_input_play_thread() {

    // thread�ߺ� ���� ���θ� Ȯ���ϰ� �ߺ� ������ �ƴ϶��
    if (input_play_check == false) {

        // true�� �ٲپ� �ߺ������� ����
        input_play_check = true;

        // ����� ����� �Է��� thread�� ����
        thread t1(listenMusic_sub_func_input_play);

        t1.detach();
    }
}

// ���ȭ���� ����ϴ� �Լ�
void listenMusic_sub_func_disp(string s, string m, int play_select, int music_time) {


    cout << "\n\n\n\n\n\n\n\n\n\n\n\n�뷡���� : " << s << endl;
    cout << " �� ��  : " << m << endl;

    // �Ͻ����� ����� ������ ���� ȭ����
    if (play_select == 3) {
        cout << "----------------------------------------------------------�Ͻ����� " << "0.0" << music_time << endl;
    }
    // ������̶�� ��� ȭ���� ���
    else
        cout << "----------------------------------------------------------����� " << "0.0" << music_time << endl;

    cout << "[1]������ [2]������ [3]�Ͻ����� [4]��� [5]�뷡��� ����\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;

}

// ��� �ð������ ����� ����� �Ǵ��ϴ� �Լ�
int listenMusic_sub_func_music_Time(string s, string m) {

    clock_t start = 0;
    clock_t finish = 0;
    clock_t offset_1 = 0;
    clock_t offset_2 = 0;
    clock_t offset_3 = 0;
    clock_t offset = 0;
    int music_time = 0;

    // ��� ���� �ð� üũ
    start = clock();


    while (true) {

        // ���ȭ�� ���
        listenMusic_sub_func_disp(s, m, play_select, music_time);

        // 1�ʸ��� �ð� ����
        finish = clock();

        // ȭ�鿡 �뷡 ����ð��� ǥ���ϱ� ���� ���
        music_time = (int)(finish - start - offset) / 1000;

        // 1�� ������
        Sleep(1000);

        // ����ڰ� �Ͻ������� ������
        if (play_select == 3) {
            
            // �Ͻ����� ȭ�� ���
            listenMusic_sub_func_disp(s, m, play_select, music_time);

            // �Ͻ� ������ �ð��� �����ϱ� ���� �Ͻ� ���� ���� �ð��� ���
            offset_1 = clock();

            while (true) {
                
                // ����� �Է� thread ����
                listenMusic_sub_func_input_play_thread();

                Sleep(100);

                // ����̳� ���� ����� ������ �ݺ��� ����
                if (play_select == 4 || play_select == 5) break;

            }

            // �Ͻ������� ���� ���� �ð� �÷�
            offset_2 = clock();

            // �Ͻ������� �ð� ���
            offset_3 = offset_2 - offset_1;

            // ����ð� ����
            // �� ��� ������  �Ͻ����� �� ���� ������ �Ͻ����� �ð� ����
            offset += offset_3;

        }

        // ���� �������� �ƴ϶�� ����� ����� �Է��� ���� thread ����
        if (play_select != 5) listenMusic_sub_func_input_play_thread();

        // ��� ���� ��� �ð��� 9�ʶ�� ����
        // ��� �ð��� ������ ����ð��� �������� ���� ���� index�� �޶�� �Ǵ��� ��ȯ
        if (music_time > 9) {

            return 1;
        }

        // ����� ��� ������
        // ������� ��� ���ؼ� ������� �ߴ��ϰ� ��� ���� ������ �뷡�� �޶�� �Ǵ��� ��ȯ
        else if (input_play_state_to_music_Time) return 2;

    }

}

// ���α׷� ����
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
            cout << "�޴��� �߸� �Է��߽��ϴ�.\n" << endl;

        }

        }

    }

    return 0;

}



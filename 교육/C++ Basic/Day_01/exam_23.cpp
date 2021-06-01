/*

  국어, 영어, 수학 점수를 입력받아 총점과 평균을 계산하여 출력한 후
  평균을 이용하여 학점을 부여한다.
  학점은 평균이 90점 이상이면 'A학점', 80점 이상이면 'B학점',
  70점 이상이면 'C학점', 60점 이상이면 'D학점', 이외는 'F학점'이
  출력되도록 구현한다.
  단, 주어진 입출력 형식에 맞게 프로그램을 구현할 것.

  <입력형식>
  국어 = 
  영어 = 
  수학 = 

  총점 : xx, 평균 : xx, 학점 : xx

*/

#include<iostream>
using namespace std;


int main() {
    
    float K, E, M, avr;

    cout << "국어 = ";
    cin >> K;

    cout << "영어 = ";
    cin >> E;

    cout << "수학 = ";
    cin >> M;

    avr = (K + E + M) / 3;

    if (avr >= 90) {
        cout << " 총점 : " << avr * 3;
        cout << " 평균 : " << avr;
        cout << " 학점 :A " << endl;
    }

    else if (80 <= avr ) {

        cout << " 총점 : " << avr * 3;
        cout << " 평균 : " << avr;
        cout << " 학점 :B " << endl;
    }

    else if (70 <= avr) {

        cout << " 총점 : " << avr * 3;
        cout << " 평균 : " << avr;
        cout << " 학점 :C " << endl;
    }

    else if (60 <= avr) {

        cout << " 총점 : " << avr * 3;
        cout << " 평균 : " << avr;
        cout << " 학점 :D " << endl;
    }

    else {

        cout << " 총점 : " << avr * 3;
        cout << " 평균 : " << avr;
        cout << " 학점 : F " << endl;
    }

    cout << "프로그램을 종료합니다." << endl;

    return 0;
}
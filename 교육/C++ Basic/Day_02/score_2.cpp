
/*
  성적처리 프로그램 2단계
  국어, 영어, 수학 점수를 입력받아 총점과 평균 그리고 학점을 계산
  조건1. 평균은 소숫점으로 추출하고, 학점은 문자로 추출한다.
  조건2. 입력받은 점수는 0 ~ 100 사이의 점수만 입력받되, 범위를 벗어나면 다시 입력받도록 구현하다.

*/

#include<iostream>
using namespace std;

int main() {
    int kor, eng, mat, tot;
    float avg;
    char grade;

    do {
        cout << "kor = ";
        cin >> kor;
    } while (kor < 0 || kor > 100); // 조건식 이 참이면 밑으로 

    do {
        cout << "eng = ";
        cin >> eng;
    } while (eng < 0 || eng > 100);

    do {
        cout << "mat = ";
        cin >> mat;
    } while (mat < 0 || mat > 100);

    tot = kor + eng + mat;
    avg = tot / 3.0f;

    switch (int(avg) / 10) { // 90정이면 90 case 만들어야 하니 10으로 나누어서 9로 만듬.
    case 10: // 100점
    case 9: // 90점
        grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F';
    }

    cout << "tot = " << tot << " , avg = " << avg << endl;
    cout << "grade = " << grade << endl;

    return 0;
}
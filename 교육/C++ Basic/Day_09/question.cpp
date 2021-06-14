/*
 입력받은 문자열의 특정 문자 빈도수 출력하는 프로그램
 <처리조건>
 - 문자열을 입력받아 문자의 빈도를 계산하여 출력한다.
 - 입력 문자열은 대소 문자를 구분하지 않는다.
 - 빈도값은
    특정문자의 출현한 수 / 전체문자의 수
 <예시>
 문자열 = Hello World
 D(d) : 1/11
 E(e)
 H(h)
 L(l)
 O(o)
 R(r)
 W(w)
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char buf[80];
    int count[26] = { 0 };  // A~Z

    cout << "문자열 = ";
    cin.getline(buf, 80);

    char* p = buf;
    int len = 0;
    double rate;

    while (*p != '\0') {
        *p = toupper(*p);  // 대문자로 변환
        if (*p >= 'A' && *p <= 'Z')
            count[*p - 'A']++;
        p++;
    }

    for (int i = 65; i <= 90; i++)
        len += count[i - 'A'];

    cout << "결과" << endl << endl;
    for (int i = 0; i < 26; i++) {
        rate = (double)count[i] / double(len);
        if (count[i] != 0) {
            cout << (char)('A' + i) << "(" << (char)('a' + i)
                << ")" << fixed << setprecision(6) << rate << endl;
        }
            
    }

    return 0;
}
/*
  C++ 문자열
  - C-스트링 : C언어에서 문자열을 표현하는 방식
    배열(array) : 동질의 자료형을 하나의 이름으로 묶어서 관리하는 자료
    'k', 'O', 'R', 'E', 'A'
  - string 클래스 : C++에서 문자열을 처리하는 방식, 권장
*/
#include<iostream>
#include<string> 
using namespace std;

int main() {
    //1.char names[12]; // 영문자 - 11글자 , 한글 - 5글자
    string names;

    cout << " 이름 = ";

    // getline()
    // 
    //cin >> names; // 공백을 허용하지 않는다.
    //1.cin.getline(names, 12, '\n'); // 공백허용
    getline(cin ,names); //공백허용


    cout << " 당신의 이름은 " << names << " 입니다.\n";

    return 0;
}
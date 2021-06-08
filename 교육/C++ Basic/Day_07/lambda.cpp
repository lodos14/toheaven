/*

 C++ 람다식의 구성
 - 캡쳐 리스트 : 람다식에서 사용하고자 하는 함수 바깥의 변수 목록
 - 매개변수등()
 - 리턴타입 - > : 생략가능
 - 함수내용정의부{...} : 람다식의 함수 코드
 int func(int x, int y){
    return x+y;
}

 [](int x, int y) -> int{return x+y;};

 void func(int x, int y){
        cout << x+y ;
}

 [](int x, int y){cout << x + y;};

 [](int x, int y ){cout << x+y;}(2, 3)
;
*/
#include<iostream>
using namespace std;

int main() {
    [](int x, int y) {cout << x + y; }(2, 3);

    auto love = [](string a, string b) {
        cout << a << "보다" << b << "가 좋아" << endl;
    };

    love("냉면", "만두");


    return 0;
}
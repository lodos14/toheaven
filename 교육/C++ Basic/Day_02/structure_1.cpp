/*

구조체(structure)
- 서로 다른 타입의 자료형을 하나로 묶어서 관리하는 자료구조
- 구조체의 멤버 or 멤버 변수
- 선언 : struct 구조체형 명{
                int a;
                float b;
                char c;

        }



*/

#include<iostream>
using namespace std;

struct Book {
    char title[30];
    char author[30];
    int price;
};

int main() {
    // 구조체변수(객체)
    // struct Book book;
    struct Book web_book = { "C++ Programming", "홍길동", 28000 };

    cout << "책제목 : " << web_book.title << endl;
    cout << "저자명 : " << web_book.author<< endl;
    cout << "책가격 : " << web_book.price << endl;
    
    return 0;
}
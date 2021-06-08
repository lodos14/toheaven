/*
   도서관리 프로그램
   < 처리조건 >
   1. 도서에 대한 기본값을 담고 있는 객체 Book 클래스를 구현한다.
   2. 북객체는 책제목, 저자, 책가격을 멤버로 가지고 있다.
   3. 북객체을 통해 새로운 책을 저장하고, 저장된 책에 대한 기본정보를 출력할 수 있도록 구현하다.
   4. 기타조건은 프로그램에 흐름에 맞게 구현하다.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book {
    string title;
    string writer;
    int price;

public:
    Book();     // 디폴트 생성자
    Book(string t, string w, int p);

    string getTitle() const;
    void setTitle(string t);
    string getWriter() const;
    void setWriter(string w);
    int getPrice() const;
    void setPrice(int p);

    void bookInfo() const;
};

Book::Book() {
    // default Constructor (디폴트 생성자) - 매개변수가 없는 생성자
    // 멤버필드를 초기화시켜주는 역활을 수행한다.
    title = "";
    writer = "";
    price = 0;
}

Book::Book(string t, string w, int p) {
    title = t;
    writer = w;
    price = p;
}

string Book::getTitle() const {
    return title;
}

void Book::setTitle(string t) {
    title = t;
}

string Book::getWriter() const {
    return writer;
}

void Book::setWriter(string w) {
    writer = w;
}

int Book::getPrice() const {
    return price;
}

void Book::setPrice(int p) {
    price = p;
}

void Book::bookInfo() const {
    cout << "책제목 : " << title << endl;
    cout << "저자명 : " << writer << endl;
    cout << "책가격 : " << price << endl << endl;
}

int main() {
    //Book book1;   // Book() 호출
    //Book book2("C++", "선생님", 3000);  // Book(string t, string w, int p); 호출
    //Book book2;
    //Book book3;

    //Book book1, book2, book3;
    //Book book[3];        // 제한적인 3개 밖에 못담음 -> 정적
    vector<Book> b;     // vector을 이용해서 book객체 담음. , 제한적인것이 없음 -> 동적

    b.push_back(Book());     // 하나의 북 객체 Book() 호출
    b.push_back(Book("aaa", "a", 1000)); // Book(string t, string w, int p); 호출
    b.push_back(Book("bbb", "b", 2000));

    //for (int i = 0; i < b.size(); i++){
    //   Book imsi = b[i];      // 주소가 넘어옴 -> 객체 복사 b[i] or b.at(i)
    //   imsi.bookInfo();        
    //}

    vector<Book>::iterator it;    // 포인터 변수(주소)
    for (it = b.begin(); it != b.end(); it++) {
        //cout << *it << endl;                  // 객체라서 그자체가 주소이다.
        Book immsi = *it;
        immsi.bookInfo();
    }
    

    return 0;
}
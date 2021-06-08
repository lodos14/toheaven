/*
   �������� ���α׷�
   < ó������ >
   1. ������ ���� �⺻���� ��� �ִ� ��ü Book Ŭ������ �����Ѵ�.
   2. �ϰ�ü�� å����, ����, å������ ����� ������ �ִ�.
   3. �ϰ�ü�� ���� ���ο� å�� �����ϰ�, ����� å�� ���� �⺻������ ����� �� �ֵ��� �����ϴ�.
   4. ��Ÿ������ ���α׷��� �帧�� �°� �����ϴ�.
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
    Book();     // ����Ʈ ������
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
    // default Constructor (����Ʈ ������) - �Ű������� ���� ������
    // ����ʵ带 �ʱ�ȭ�����ִ� ��Ȱ�� �����Ѵ�.
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
    cout << "å���� : " << title << endl;
    cout << "���ڸ� : " << writer << endl;
    cout << "å���� : " << price << endl << endl;
}

int main() {
    //Book book1;   // Book() ȣ��
    //Book book2("C++", "������", 3000);  // Book(string t, string w, int p); ȣ��
    //Book book2;
    //Book book3;

    //Book book1, book2, book3;
    //Book book[3];        // �������� 3�� �ۿ� ������ -> ����
    vector<Book> b;     // vector�� �̿��ؼ� book��ü ����. , �������ΰ��� ���� -> ����

    b.push_back(Book());     // �ϳ��� �� ��ü Book() ȣ��
    b.push_back(Book("aaa", "a", 1000)); // Book(string t, string w, int p); ȣ��
    b.push_back(Book("bbb", "b", 2000));

    //for (int i = 0; i < b.size(); i++){
    //   Book imsi = b[i];      // �ּҰ� �Ѿ�� -> ��ü ���� b[i] or b.at(i)
    //   imsi.bookInfo();        
    //}

    vector<Book>::iterator it;    // ������ ����(�ּ�)
    for (it = b.begin(); it != b.end(); it++) {
        //cout << *it << endl;                  // ��ü�� ����ü�� �ּ��̴�.
        Book immsi = *it;
        immsi.bookInfo();
    }
    

    return 0;
}
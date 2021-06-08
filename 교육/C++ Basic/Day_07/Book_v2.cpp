#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    string title;
    string writer;
    int price;

public:
    Book();         // ����Ʈ ������
    Book(string t, string w, int p);

    string getTitle() const;
    void setTitle(string t);
    string getWriter() const;
    void setWriter(string w);
    int getPrice() const;
    void setPrice(int p);

    void bookInfo() const;
};

Book::Book()
    : title(""), writer(""), price(0) {}

Book::Book(string t, string w, int p)
    : title(t), writer(w), price(p) {}

string Book::getTitle() const { return title; }
void Book::setTitle(string t) { title = t; }
string Book::getWriter() const { return writer; }
void Book::setWriter(string w) { writer = w; }
int Book::getPrice() const { return price; }
void Book::setPrice(int p) { price = p; }

void Book::bookInfo() const {
    cout << "å ���� : " << title << endl;
    cout << "���ڸ�  : " << writer << endl;
    cout << "å ���� : " << price << endl << endl;
}

/*
  Ŭ���� �̸� : BookHandler
  Ŭ���� ���� : Control Ŭ����
  ó�����
  1. å�� ����ϴ� �۾�
  2. ��ϵ� å�� ���� ������ ���
  3. ��ϵ� å�� ��� �ݾ��� ������ ���
  4. ��ϵ� å�� ���ڸ��� ���� å�� ������ ���
  5. å ������ ���� �ش� å�� ������ �����ϵ��� ����
  6. �� �� �̻��� å�� ��Ƽ� ó���� �� �ֵ��� �ڷᱸ���� Ȱ��
*/

class BookHandler {
    vector<Book> book;

public:
    // å�� ����ϴ� �۾�
    void addBook();
    // ���� ��ϵ� å�� ���� ����
    void getBook();
    // ��ϵ� ��� å�� ���� ���
    void showAllBook();
    // ��ϵ� å�� ���� ����
    void showAllPrice();
    // ���ڸ� ���� å���� ���
    void getBookInfo();
    // ���� ���� å ����
    void editBook();
};

void BookHandler::addBook() {
    string title;
    string writer;
    int price;

    cout << "å���� = ";
    //cin >> title;
    getline(cin, title);
    cout << "���ڸ� = ";
    //cin >> writer;
    getline(cin, writer);
    cout << "å���� = ";
    cin >> price;


    /*Book b(title, writer, price);
    book.push_back(b);*/
    book.push_back(Book(title, writer, price));
    cout << "å ����� �Ϸ��߽��ϴ�." << endl << endl;
}

void BookHandler::getBook() {
    cout << "��ϵ� å�� ���� : " << book.size() << endl;
}

void BookHandler::showAllBook() {
    for (auto it = book.begin(); it != book.end(); it++) {
        /*Book imsi = *it;
        imsi.bookInfo();*/
        it->bookInfo();
    }
}

void BookHandler::showAllPrice() {
    int sum = 0;
    for (auto it = book.begin(); it != book.end(); it++) {
        sum += it->getPrice();
    }
    cout << "�� �������� : " << sum << endl;
}

void BookHandler::getBookInfo() {
    cout << "���ڸ� = ";
    string w;
    getline(cin, w);

    for (auto it = book.begin(); it != book.end(); it++) {
        if (it->getWriter() == w) {
            it->bookInfo();
            return;
        }
    }
    cout << "�Է��� ���ڿ� ���� ������ �߰ߵ��� �ʾҽ��ϴ�." << endl << endl;
}

void BookHandler::editBook() {
    
    cout << "å���� = ";
    string t;
    cin >> t;
    cin.ignore();

    for (auto it = book.begin(); it != book.end(); it++) {
        if (it->getTitle() == t) {

            cout << "���ڸ� = ";
            string w;
            getline(cin, w);

            cout << "å���� = ";
            int p;
            cin >> p;

            it->setWriter(w);
            it->setPrice(p);
        }
    }
}

int main() {
    BookHandler manager;

    while (true) {
        // �޴����
        cout << "== Book Manager ==\n";
        cout << "1. ���� ���\n";
        cout << "2. ���� �˻�\n";
        cout << "3. ���� ���\n";
        cout << "4. �۾� ����\n";
        cout << "===================\n";
        int ch;
        cout << "���� = ";
        cin >> ch;

        // �Է¹��۸� ����� �۾�
        cin.ignore();

        // ���ÿ��� ���ڸ� �Է��ϰ� ���͸� ������
        // '����' (= \n)�� �������� �Ѿ�� ���ڷ� �ԷµǾ���� -> �Է¹��ۿ� ��������
        // '����'�� ��������� ignore()�� ���� -> // �Է¹��� �ʱ�ȭ(cin.clear())

        /*
         ���ڿ��� ������ϴ� �Լ� : gets(), puts()
         gets(����); // ���ڿ� �Է�     // ������ �Է� // get - �Է��� �޾ƿ�
         puts(����); // ���ڿ� ���    //������ �ִ°��� ���
        */
        // fflush(stdin);      // stdio.h

        //gets();     // getstring();     �ϳ��� ���ڿ��� ���Ͷ�
        // puts();

        switch (ch) {
        case 1: manager.addBook(); break;
        case 2: {
            cout << "== �˻���� ==\n";
            cout << "[1]���ڸ� [2]������\n";
            int c;
            cin >> c;
            cin.ignore();
            if (c == 1) manager.getBookInfo();
            else if (c == 2) manager.editBook();    // �ƴ�..
            else cout << "�ùٸ��� ���� �����Դϴ�.\n";
            break;
        }
        case 3:
            manager.showAllBook(); break;
        case 4:
            cout << "���α׷��� �����մϴ�.\n";
            return 0;
        }
    }
    return 0;
}
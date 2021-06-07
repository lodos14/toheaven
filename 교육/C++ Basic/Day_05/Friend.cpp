/*

 friend 키워드 : 선언된 클래스의 private 멤버를 접근할 수 있다.

*/

#include<iostream>
#include<cstring>
using namespace std;

//클래스 선언
class Girl;
/*
   Friend 키워드 : 선언된 클래스의 private 멤버를 접근할 수 있다.
*/

#include<iostream>
#include<string>
//#pragma warning<dialbe:4996>
using namespace std;

// 클래스 선언
class Girl;    // 프로그램은 위에서 아래로 근데 Boy클래스에 Girl 클래스가 있기때문에 미리 선언.

class Boy {
    int height;
    friend class Girl;

public:
    Boy(int len) : height(len) {}
    void showYourFriendInfo(Girl& frn);
};

class Girl {
    string phone;

public:
    Girl(string num) {
        phone = num;
    }
    friend class Boy;                // 상대 private을 접근할 수 있다.
    void showYourFriendInfo(Boy& frn);
};

void Boy::showYourFriendInfo(Girl& frn) {
    cout << "Her Number : " << frn.phone << endl;
}

void Girl::showYourFriendInfo(Boy& frn) {
    cout << "His height : " << frn.height << endl;
}

int main() {
    Boy boy(178);
    Girl girl("010-1234-5678");

    boy.showYourFriendInfo(girl);
    girl.showYourFriendInfo(boy);


    return 0;
}
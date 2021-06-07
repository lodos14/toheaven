/*

 friend Ű���� : ����� Ŭ������ private ����� ������ �� �ִ�.

*/

#include<iostream>
#include<cstring>
using namespace std;

//Ŭ���� ����
class Girl;
/*
   Friend Ű���� : ����� Ŭ������ private ����� ������ �� �ִ�.
*/

#include<iostream>
#include<string>
//#pragma warning<dialbe:4996>
using namespace std;

// Ŭ���� ����
class Girl;    // ���α׷��� ������ �Ʒ��� �ٵ� BoyŬ������ Girl Ŭ������ �ֱ⶧���� �̸� ����.

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
    friend class Boy;                // ��� private�� ������ �� �ִ�.
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
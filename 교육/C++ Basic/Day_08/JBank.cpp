#include <iostream>
#include <string>
using namespace std;

/*
  static : ����, ����
         Ŭ������ ��� ��ü���� '����'�ϴ� ��
         static ��ü�� static �ȿ��� ���� �� �ִ�
*/

class JBank {
    //char name[30];
    string name;
    int money;
    static double rate;

public:
    JBank(string name, int money, double r)
        : name(name), money(money)/*, rate(r)*/ {
        rate = r;               // static�� �ƴϹǷ� �ݷ��ʱ�ȭ�� �� �� ����;
    }

    void disp() {
        cout << name << " : " << money << " : " << rate << endl;
    }
};

double JBank::rate = 0.0;

int main() {
    JBank aaa("aaa", 1000, 0.5);      // �ʱ�
    aaa.disp();
    cout << endl;

    JBank bbb("bbb", 1000, 0.3);      // �߱�
    aaa.disp();
    bbb.disp();
    cout << endl;

    JBank ccc("ccc", 1000, 0.7);
    aaa.disp();
    bbb.disp();
    ccc.disp();
}
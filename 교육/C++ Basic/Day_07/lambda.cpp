/*

 C++ ���ٽ��� ����
 - ĸ�� ����Ʈ : ���ٽĿ��� ����ϰ��� �ϴ� �Լ� �ٱ��� ���� ���
 - �Ű�������()
 - ����Ÿ�� - > : ��������
 - �Լ��������Ǻ�{...} : ���ٽ��� �Լ� �ڵ�
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
        cout << a << "����" << b << "�� ����" << endl;
    };

    love("�ø�", "����");


    return 0;
}
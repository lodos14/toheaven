/*

 ���� ������

 int num = 20;
 int &ref = num;

 int num(20);
 int &ref(num);

*/
#include<iostream>
using namespace std;


class Sample {
    int num1;
    int num2;

public:
    Sample(int n1, int n2) : num1(n1), num2(n2) {}      // �����ڸ� �ݷ��ʱ�ȭ ��밡��
    Sample(Sample& copy)                        // ��������� (�����ڸ� ����)
        : num1(copy.num1), num2(copy.num2) {}  //num1(15), num2(20)  // num1=15, num2=20

    void show() {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }
};

int main() {
    Sample sam1(15, 20);

    //Sample sam2 = sam1;      // ��ü ����
    Sample sam2(sam1);

    sam2.show();

    return 0;
}
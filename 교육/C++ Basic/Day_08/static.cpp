#include <iostream>
using namespace std;

//static int x = 0;               // ��������

void aaa() {
    static int x = 0;   //��������      static�� ���̸� �ٽ� ȣ���ϴ��� �ʱ�ȭ�� ���̻� ���� �ʴ´�.(ó�� �ѹ��� �ʱ�ȭ ��)
    //x = 0;         //��������
    x++;
    cout << x << endl;
}

int main() {

    for (int i = 0; i < 10; i++)
        aaa();

    return 0;
}
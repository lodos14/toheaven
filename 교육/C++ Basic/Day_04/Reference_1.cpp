/*

    Reference : ����
    - �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ٸ� �̸�
    - ������ ���ǵ� ������ �ٸ� �̸��� �����ϴ� ��
    - �ݵ�� �����ڸ� ������ �� �ʱ�ȭ�� �Ǿ� �־�� �Ѵ�.
    - ���� ������ : &

*/

#include<iostream>
using namespace std;

int main() {
    int num1 = 1020;
    int& num2 = num1;

    num2 = 2021;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    cout << "num1 �ּ� = " << &num1 << endl;
    cout << "num2 �ּ� = " << &num2 << endl;

    return 0;
}
/*
   ���������� �����ϴ� ���α׷�
   �� ���� ������ �Է¹޾� ��Ģ������ ����� ����ϵ��� ���α׷��� �����Ͻÿ�.

   <���������>
   ��1=
   ��2=

   ��1+��2=
      |

*/

#include<iostream>
using namespace std;

int main() {
    //���� : ������ ����� �ڷ����� �����ϴ� ����
    int num1, num2;
    int add, sub, mul, div, nmg;

    //�Է¹� :
    cout << "��1=";
    cin >> num1;
    cout << "��2=";
    cin >> num2;

    //ó���� :
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    
    //��¹� :
    cout << num1 << " + " << num2 << " = " << add << endl;
    cout << num1 << " -" << num2 << " = " << sub << endl;
    cout << num1 << " *" << num2 << " = " << mul << endl;
    cout << num1 << " /" << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " %" << num2 << " = " << num1 % num2 << endl;

    return 0;
}

/*
   �Լ�(Function)
   - ���� ���� ��ɾ �ϳ��� �̸����� ��Ƽ� �����ϴ� ��ü
   - Ư���� ������ �������ϱ� ���� ���������� ����� �ڵ��� ����
   - ĸ��ȭ
   - ���� : �ݺ����� ���α׷����� ȿ�������� ����, ������
   - ����
      ��ȯ �ڷ��� �Լ���(�Ű�������){
      // �Լ��� �������Ǻ�
      {
   - ȣ���� ���ؼ� �����Ѵ�.
   - ȣ���� 
     Call By Name : �̸��� ���� ȣ��
     Call By Value : �Լ��� �Ű������� ��Ƽ� ȣ��(���� ���� ȣ��
     Call By Reference : �Լ��� �Ű������� �ּҸ� ��Ƽ� ȣ�� (�ּҿ� ���� ȣ��)
*/

#include<iostream>
using namespace std;
// �Լ� �����
void aaa();
void bbb(int*x, int*y);  // �Լ��� �ڿ� ������ �Լ� ����

int main() {
    // ����
    int x, y;

    // �Է¹�
    x = 10; y = 20;

    // ó����
    aaa(); // Call By Name
    //bbb(x, y); // Call By Value
    bbb(&x, &y); // Call By Reference

    // ��¹�
    cout << "x = " << x << ", y = " << y << endl;


    return 0; // �ý����� ����
}

void aaa() {
    cout << "aaa �Լ�ȣ��" << endl;
    //return;
}

void bbb(int* x, int* y) { // int x = 10, int y = 20
    /*int tmp;
    tmp = x;
    x = y;
    y = tmp;
    */

    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
   
    cout << "x = " << x << ", y = " << y << endl;
}

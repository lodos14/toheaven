/*

  ������(Pointer) : �޸��� �ּҸ� ����Ű�� ��
  - ������ ���� : �޸��� �ּҰ��� �����ϴ� ����
    int a;
    int* p;

  - ���� �ӵ��� ������ �ϱ� ���ؼ�
  - �迭ó�� ����� �����͸� ��� �ִ� �ڷᱸ���� �Բ� ���ȴ�.
  - ������ ���� : +/-, ++/--

*/

#include<iostream>
using namespace std;

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* p;

    p = arr; // �迭���� �迭�� �����ּҿ� ����.(&arr[0])

    /*cout << *(p + 0) << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;*/

    for(int i = 0; i < 5; i++)
        //cout << *(p + i) << endl;
        cout << *p++  << endl;

    return 0;
}
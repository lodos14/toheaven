/*
   ����loop : ���������� �ݺ��� �����ϴ� ��.
   while(True, 1){....}
   for( ;; ){ .... }
   do{....} while(true);
   while �� : ����ڿ� ���� �ݺ��� ������ ��, loop ������ ��
*/

// ���ڸ� �Է¹޾� ����ϴ� ���α׷�, �� �Է¹��� ���ڰ� 0�̸� ����

#include<iostream>
using namespace std;



int main() {
    int num;

    while (true) {

        cout << "num = ";
        cin >> num;
        if (num == 0)
            break;
        cout << num << endl;

    }

    return 0;
}
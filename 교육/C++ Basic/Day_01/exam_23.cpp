/*

  ����, ����, ���� ������ �Է¹޾� ������ ����� ����Ͽ� ����� ��
  ����� �̿��Ͽ� ������ �ο��Ѵ�.
  ������ ����� 90�� �̻��̸� 'A����', 80�� �̻��̸� 'B����',
  70�� �̻��̸� 'C����', 60�� �̻��̸� 'D����', �ܴ̿� 'F����'��
  ��µǵ��� �����Ѵ�.
  ��, �־��� ����� ���Ŀ� �°� ���α׷��� ������ ��.

  <�Է�����>
  ���� = 
  ���� = 
  ���� = 

  ���� : xx, ��� : xx, ���� : xx

*/

#include<iostream>
using namespace std;


int main() {
    
    float K, E, M, avr;

    cout << "���� = ";
    cin >> K;

    cout << "���� = ";
    cin >> E;

    cout << "���� = ";
    cin >> M;

    avr = (K + E + M) / 3;

    if (avr >= 90) {
        cout << " ���� : " << avr * 3;
        cout << " ��� : " << avr;
        cout << " ���� :A " << endl;
    }

    else if (80 <= avr ) {

        cout << " ���� : " << avr * 3;
        cout << " ��� : " << avr;
        cout << " ���� :B " << endl;
    }

    else if (70 <= avr) {

        cout << " ���� : " << avr * 3;
        cout << " ��� : " << avr;
        cout << " ���� :C " << endl;
    }

    else if (60 <= avr) {

        cout << " ���� : " << avr * 3;
        cout << " ��� : " << avr;
        cout << " ���� :D " << endl;
    }

    else {

        cout << " ���� : " << avr * 3;
        cout << " ��� : " << avr;
        cout << " ���� : F " << endl;
    }

    cout << "���α׷��� �����մϴ�." << endl;

    return 0;
}
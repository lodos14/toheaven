
/*
  ����ó�� ���α׷� 2�ܰ�
  ����, ����, ���� ������ �Է¹޾� ������ ��� �׸��� ������ ���
  ����1. ����� �Ҽ������� �����ϰ�, ������ ���ڷ� �����Ѵ�.
  ����2. �Է¹��� ������ 0 ~ 100 ������ ������ �Է¹޵�, ������ ����� �ٽ� �Է¹޵��� �����ϴ�.

*/

#include<iostream>
using namespace std;

int main() {
    int kor, eng, mat, tot;
    float avg;
    char grade;

    do {
        cout << "kor = ";
        cin >> kor;
    } while (kor < 0 || kor > 100); // ���ǽ� �� ���̸� ������ 

    do {
        cout << "eng = ";
        cin >> eng;
    } while (eng < 0 || eng > 100);

    do {
        cout << "mat = ";
        cin >> mat;
    } while (mat < 0 || mat > 100);

    tot = kor + eng + mat;
    avg = tot / 3.0f;

    switch (int(avg) / 10) { // 90���̸� 90 case ������ �ϴ� 10���� ����� 9�� ����.
    case 10: // 100��
    case 9: // 90��
        grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F';
    }

    cout << "tot = " << tot << " , avg = " << avg << endl;
    cout << "grade = " << grade << endl;

    return 0;
}
/*
  7�ܰ� : ����ü�� Ȱ���� ��
*/

#include <iostream>
//#include <string>
using namespace std;

struct Student {
    int kor, eng, math, tot;
    float avg;
    // char grade;
};

int main() {
    Student stu[3];

    for (int i = 0; i < 3; i++) {
        cout << "���� = ";
        cin >> stu[i].kor;
        cout << "���� = ";
        cin >> stu[i].eng;
        cout << "���� = ";
        cin >> stu[i].math;

        stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
        stu[i].avg = stu[i].tot / 3.0f;
    }

    for (int i = 0; i < 3; i++) {
        cout << "���� = " << stu[i].tot << ", ��� = " << stu[i].avg << endl;
    }
    return 0;
}
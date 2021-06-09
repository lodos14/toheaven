/*
  �ټ� ���� ������ �Է¹޾� �迭�� ������ ��
  �� �հ� ����� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
*/

#include <iostream>
using namespace std;

/*
  step1. �迭�� �޾Ƽ� ó���ϴ� ���
  step2. �ּҸ� �����ϴ� ���� - �����ͺ���. �迭ó�� ��밡��
*/

//int adder(int data[]) {
//   int sum = 0;
//   for (int i = 0; i < 5; i++) {
//      sum += data[i];
//   }
//   return sum;
//}

int adder(int* data) {         // data = &arr[0]
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *data++;
    }
    return sum;
}


float average(int s, int z) {
    return s / (float)z;
}


int main() {
    int arr[5], sum = 0;      // ���������� �ʱ�ȭ�� ���Ѿ��Ѵ�.
    float avg;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "��° ���� = ";
        cin >> arr[i];
    }

    sum = adder(arr);
    avg = average(sum, sizeof(arr) / sizeof(arr[0]));
    //avg = sum / 5.0f;

    cout << "sum = " << sum << endl;
    cout << "average = " << avg << endl;

    return 0;
}
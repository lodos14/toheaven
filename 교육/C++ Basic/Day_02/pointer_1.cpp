/*

  포인터(Pointer) : 메모리의 주소를 가르키는 것
  - 포인터 변수 : 메모리의 주소값을 저장하는 변수
    int a;
    int* p;

  - 접근 속도를 빠르게 하기 위해서
  - 배열처럼 대용향 데이터를 담고 있는 자료구조에 함께 사용된다.
  - 포인터 연산 : +/-, ++/--

*/

#include<iostream>
using namespace std;

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* p;

    p = arr; // 배열명은 배열의 시작주소와 같다.(&arr[0])

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
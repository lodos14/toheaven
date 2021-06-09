#include <iostream>
#include <array>
using namespace std;

template<size_t N>
void PRINT(array<int, N> arr) {
    //for (auto element : arr)      // for(�ڷ��� �������: ���պ���)
    //   cout << element << " ";

    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";

    cout << endl;
}

int main() {
    array<int, 5> arr = { 1, 2, 3, 4, 5 };
    PRINT(arr);

    array<int, 8> arr1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
    PRINT(arr1);

    array<int, 6> arr2 = { 1, 2, 3, 4, 5, 6 };
    cout << arr2.front() << endl;      // 1
    cout << arr2.back() << endl;      // 6

    // data() : �迭 ��ü ���ο��� ���� �����Ͱ� ����� ��ġ�� ����Ű�� ������
    cout << *(arr2.data() + 1) << endl;   // 2

    return 0;
}
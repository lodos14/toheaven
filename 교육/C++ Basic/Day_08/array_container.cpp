/*
  std::array
  - �޸𸮸� �ڵ����� �Ҵ��ϰ� �����ϸ�,
    ������ Ÿ�԰� �迭ũ�⸦ �Ű������� ����ϴ� Ŭ���� ���ø�
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> arr1;         //  <type, size>
    arr1[0] = 1;

    cout << "arr1 �迭�� ù��° ���� : " << arr1[0] << endl;

    // ũ�Ⱑ 5�� floatŸ���� �迭�� �����ϰ� �ʱ�ȭ
    array<double, 5> arr2 = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    cout << "arr2 �迭�� ���ҵ�" << endl;
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
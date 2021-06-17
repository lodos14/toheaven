#include <iostream>
#include "SafeArray.h"
#include"invalidindex.h"

int main() {

    int nums[] = { 1, 2, 3, 4, 5 };
    Array arr1(nums, 5);

    SafeArray arr2(nums, 5);

    /*arr1[5] = 6;
    for (int i = 0; i != arr1.size(); ++i) {
       std::cout << arr1[i];
       std::cout << ((i < arr1.size() - 1) ? ", " : "");
    }
    std::cout << std::endl;*/

    //arr2[5] = 6;
    /*for (int i = 0; i != arr1.size(); ++i) {
       std::cout << arr2[i];
       std::cout << ((i < arr2.size() - 1) ? ", " : "");
    }
    std::cout << std::endl;*/

    // �θ�Ŭ������ �����ʹ� �ڽ�Ŭ������ ��ü�� ����ų �� �ִ�
    Array* pArr = &arr1;      // ������ - �Լ� ���������� ��, ���Ͻ�ų �� ����
    //pArr = &arr2;            // pArr - ArrayŸ��, arr2 - SafeArrayŸ��


    // (*pArr)[5] = 6;            // (*pArr).operator[](5);      // pArr->operator[](5);
                            // �������̵� - ������ (�ڽ��� �θ� �ִ� �����̸��� �Լ��� ����� ��)
                            // ����ƽ���ε� (���� ���ε�)  -> virtual�� ���̸�(�����Լ�) �������ε��� ��
                            // �Ҹ��ڵ� virtual �ٿ������

    pArr = new SafeArray(arr2);

    try {               // ������ �߻��Ҹ��� ������ try�� ������
        (*pArr)[5] = 6;
    }
    catch (InvalidIndex &e) {
        std::cerr << "index boundary exception invalind index : " << e.invalid() << std::endl;
    }

    delete pArr;         // pArr �� �迭������ �ƴ϶� delete[] �� �ƴ�.?
                      // ��ü�� �ڽĲ���(SafeArrayŸ��) �Ҹ��ڰ� �θ𲨰� ����ǹǷ�,, �θ�Ҹ��ڿ� virtual �ٿ������
    return 0;
}

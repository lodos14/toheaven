/*

 �����Լ� : �Ļ� Ŭ�������� ������ �� ������ ����ϴ� ��� �Լ�
            �ݵ�� ������ �ؾ߸� �ϴ� �Լ��� �ƴϴ�.

���� ���� �Լ� : �ݵ�� �Ļ�Ŭ�������� ������ �ؾ߸� �ϴ� �Լ�
- virtual ��� �Լ��� ���� = 0;

�߻� Ŭ����(abstract class)
- �ϳ� �̻��� ���� ���� �Լ��� �����ϴ� Ŭ����
- �ݵ�� ������ �ؾ߸� �Ѵ�.
- ��ü�� ������ �� ����
*/

#include<iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal(){}  //���� �Ҹ����� ����
    virtual void cry() = 0; // ���� �����Լ��� ����


};

class Dog : public Animal {
public:

    virtual void cry() {
        cout << "�۸�" << endl;
    }
};

class cat : public Animal {

public:
    virtual void cry() {
        cout << "�߿�" << endl;
    }


};

int main() {
    Dog my_dog;
    my_dog.cry();

    cat my_cat;
    my_cat.cry();

    //Animal an;
    Animal* ani = &my_dog;     // �߻� Ŭ������ ��ü�� ���� �� �����Ƿ� �ڽ��� �־ ����/ ���������� ǥ�� ���


    return 0;
}


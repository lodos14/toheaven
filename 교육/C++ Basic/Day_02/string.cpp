/*
  C++ ���ڿ�
  - C-��Ʈ�� : C���� ���ڿ��� ǥ���ϴ� ���
    �迭(array) : ������ �ڷ����� �ϳ��� �̸����� ��� �����ϴ� �ڷ�
    'k', 'O', 'R', 'E', 'A'
  - string Ŭ���� : C++���� ���ڿ��� ó���ϴ� ���, ����
*/
#include<iostream>
#include<string> 
using namespace std;

int main() {
    //1.char names[12]; // ������ - 11���� , �ѱ� - 5����
    string names;

    cout << " �̸� = ";

    // getline()
    // 
    //cin >> names; // ������ ������� �ʴ´�.
    //1.cin.getline(names, 12, '\n'); // �������
    getline(cin ,names); //�������


    cout << " ����� �̸��� " << names << " �Դϴ�.\n";

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a(10);    // a : vectcor�� ���ø� Ŭ������ �ν��Ͻ� 


    //cout << a.capacity() << endl; //capacity() : �뷮
    //cout << a.size() << endl;     // ũ��
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    cout << a.size() << endl; // 13 -> 10�� �ڿ� 3���� �߰�
    cout << a.capacity() << endl; // 15 -> ���� �ڷ����� ���� ����ؼ� ���� -> �� ���X

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    return 0;
}
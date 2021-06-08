#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a(10);    // a : vectcor의 템플릿 클래스의 인스턴스 


    //cout << a.capacity() << endl; //capacity() : 용량
    //cout << a.size() << endl;     // 크기
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    cout << a.size() << endl; // 13 -> 10개 뒤에 3개를 추가
    cout << a.capacity() << endl; // 15 -> 실제 자료형에 따라 고려해서 배정 -> 잘 사용X

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    return 0;
}
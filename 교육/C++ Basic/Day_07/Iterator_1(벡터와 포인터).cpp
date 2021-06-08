/*

 iterator
 - 반복자
 - 컨테이너의 원소를 가리키는 포인터
 - 변수 선언
   구체적인 컨테이너를 지정하여 반복자 생성
   vector<int>::iterator it;
   it = v.begin();

*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	vector<int>::iterator it; // 포인터 변수
	it = v.begin();

	it++; // it = it + 1
	int num = *it; // 2

	num = num * 2; // 4
	*it = num; // 1 4 3 4 5

	it = v.erase(it); // 1 3 4 5
	
	
	it = v.end();

	for (it = v.begin(); it != v.end(); it++){
		cout << *it << ' ';
}

	cout << endl;

	return 0;

}
/*

 vector : 가변 크기 배열

*/

#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

/*
 push_back(요소) : 마지막에 추가
 at(인덱스) : 추출, 참조
 begin(), end()
 empyt(): 벡터가 비어있는지를 bool값으로 리턴 turn/false
 erase(iterator it) : it가 가르키는 원소 삭제
 insert(iterator it, element)
 size(): 원소의 개수
 */

int main() {
	vector<int> v;  // 정수벡터 생성

	// 원소삽입
	v.push_back(1);
	v.push_back(2);
	v.push_back(3); // 1, 2, 3

	// 원소개수와 용량
	int s = v.size();  // 3  실제 크기
	int c = v.capacity(); //  최대 크기

	// 원소접근
	v.at(2) = 5; // 2번째 인덱스에 5를 집어 넣어라   1, 2, 5
	int num = v.at(1);  // num = 2

	v[0] = 10; // 10, 2, 5
	int num2 = v[2];  // num2 = 5

	// 벡터의 요소 출력
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	cout << endl;



	return 0;
}


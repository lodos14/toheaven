/*

 STL(Standard Template Library) : 일반화 프로그래밍
 - 일반화 프로그래밍은 데이터를 중시하는 객체지향 프로그래밍과는 달리
   프로그램의 알고리즘에 중점을 둔 기법

- C++ 표준 템플릿 라이브러리 구성요소
  반복자(iterator)
  컨테이너(container) : 같은 타입의 여러 객체를 저장 클래스 템플릿

  알고리즘(Algorithm) : 함수들 

  - 컨테이너 : 순차(sequence), 연관(associative), 어댑터(adapter)

  - 순차 컨테이너 : vector, list , deque
  - 연관 컨데이터 : set, map
  - 어탭터 컨테이너 : stack, queue

*/

#include<iostream>
#include<vector>
using namespace std;



int main() {
	// 벡터객체 생성

	vector<int> vc = { 19, 20, 30 };

	cout << "현재 벡터의 크기 : " << vc.size() << endl;

	// 벡터 요소 추가
	vc.push_back(40);

	cout << "현재 벡터의 크기 : " << vc.size() << endl;
	cout << "벡터의 네번째 요소 : " << vc[3] << endl;

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " ")); // 19 20 30 40

	return 0;
}
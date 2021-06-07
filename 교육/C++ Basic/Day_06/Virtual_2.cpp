/*

 가상함수 : 파생 클래스에서 재정의 할 것으로 기대하는 멤버 함수
            반드시 재정의 해야만 하는 함수는 아니다.

순수 가상 함수 : 반드시 파생클래스에서 재정의 해야만 하는 함수
- virtual 멤버 함수의 원형 = 0;

추상 클래스(abstract class)
- 하나 이상의 순수 가상 함수를 포함하는 클래스
- 반드시 재정의 해야만 한다.
- 객체를 생성할 수 없다
*/

#include<iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal(){}  //가상 소멸자의 선언
    virtual void cry() = 0; // 순수 가상함수의 선언


};

class Dog : public Animal {
public:

    virtual void cry() {
        cout << "멍멍" << endl;
    }
};

class cat : public Animal {

public:
    virtual void cry() {
        cout << "야옹" << endl;
    }


};

int main() {
    Dog my_dog;
    my_dog.cry();

    cat my_cat;
    my_cat.cry();

    //Animal an;
    Animal* ani = &my_dog;     // 추상 클래스는 객체를 만들 수 없으므로 자식을 넣어서 실행/ 다형성적인 표현 사용


    return 0;
}


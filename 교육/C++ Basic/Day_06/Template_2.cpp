/*
   STACK(스택)
   - LIFO(Last In First Out), 후입선출
   - 마지막에 입력한 데이터를 가장 처음에 추출
   - 구성요소
     top : 스택메모리의 상단
     bottom : 스택메모리의 하단
     sp : 삽입과 삭제가 이루어지는 위치 (stack point)
     push(삽입), pop(삭제)
*/

#include<iostream>
using namespace std;

template<typename T>
class STACK {
    T data[10];  // 0 ~ 9
    int sp;

public:
    STACK();
    void push(T a);
    T pop();
};

template<typename T>
STACK<T>::STACK() : sp(-1) {}

template<typename T>
void STACK<T>::push(T a) {
    if (sp > 9) {
        cout << "stack is full" << endl;
        return;
    }
    data[++sp] = a;
}

template<typename T>
T STACK<T>::pop() {
    if (sp < 0) {
        cout << "stack is empty" << endl;
    }
    T a = data[sp--];
    return a;
}

int main() {
    STACK<char> stack;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    cout << stack.pop() << endl;  // 아스키코드가 실생 -> 다시 클래스 만드는거 비효율적 -> template사용
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;

    return 0;
}

/*
   STACK(����)
   - LIFO(Last In First Out), ���Լ���
   - �������� �Է��� �����͸� ���� ó���� ����
   - �������
     top : ���ø޸��� ���
     bottom : ���ø޸��� �ϴ�
     sp : ���԰� ������ �̷������ ��ġ (stack point)
     push(����), pop(����)
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

    cout << stack.pop() << endl;  // �ƽ�Ű�ڵ尡 �ǻ� -> �ٽ� Ŭ���� ����°� ��ȿ���� -> template���
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;

    return 0;
}

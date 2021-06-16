#include "Queue.h"
#include<iostream>
using namespace std;

int main() {

    Queue q1(10), q2(100);

    q1.push(100);
    q1.push(200);
    q1.push(300);

    
    cout << "q1 1st pop() : " << q1.pop() << endl;
    cout << "q1 2nd pop() : " << q1.pop() << endl;
    cout << "q1 3rd pop() : " << q1.pop() << endl;
    

    q2.push(900);
    q2.push(800);
    q2.push(700);

    cout << "q2 1st pop() : " << q2.pop() << endl;
    cout << "q2 2nd pop() : " << q2.pop() << endl;
    cout << "q2 3rd pop() : " << q2.pop() << endl;

   

    return 0;
}
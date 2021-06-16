//#include<stdio.h>
//#include<cstdio>
#include<iostream>
#include"stack.h"
using namespace std;


int main() {

    Stack s1(10), s2(100); 


    s1.push(100); 
    s1.push(200);
    s1.push(300);
   
    
    cout << "s1 1st pop() : " << s1.pop() << endl;
    cout << "s1 2st pop() : " << s1.pop() << endl;
    cout << "s1 3st pop() : " << s1.pop() << endl;
    

    s2.push(700);
    s2.push(800);
    s2.push(900);

    cout << "s2 1st pop() : " << s2.pop() << endl;
    cout << "s2 2st pop() : " << s2.pop() << endl;
    cout << "s2 3st pop() : " << s2.pop() << endl;

    while (!s2.empty()) {
        cout << "s2 pop() : " << s2.pop() << endl;
    }

    return 0;
}
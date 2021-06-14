#include<stdio.h>
#include"stack.h"

int main(void) {
    Stack s1, s2; // 지역변수는 초기화 해야함
                  // 배열은 초기화 안해줘도 됨
                  // tos 값은 초기화 해줘야 함.

    /*for (int i = 0; i < 100; ++i)
       s1.array[i] = 0; */     // 배열 초기화
    //s1.tos = 0;

    /*for (int i = 0; i < 100; ++i)
       s2.array[i] = 0; */     // 배열 초기화
    //s2.tos = 0;

    initStack(&s1); 
    initStack(&s2);

    push(&s1, 100); // s1이 바뀌는게 아니라 s1의복사본이 바뀐다.
                   // ->pointer로 가르쳐주기 
    push(&s1, 200);
    push(&s1, 300);

    printf("s1 1st pop() : %d\n", pop(&s1));
    printf("s1 2nd pop() : %d\n", pop(&s1));
    printf("s1 3rd pop() : %d\n", pop(&s1));

    push(&s2, 700);
    push(&s2, 800);
    push(&s2, 900);

    printf("s2 1st pop() : %d\n", pop(&s2));
    printf("s2 2nd pop() : %d\n", pop(&s2));
    printf("s2 3rd pop() : %d\n", pop(&s2));

    return 0;
}
#include<stdio.h>
#include"stack.h"

int main(void) {
    Stack s1, s2; // ���������� �ʱ�ȭ �ؾ���
                  // �迭�� �ʱ�ȭ �����൵ ��
                  // tos ���� �ʱ�ȭ ����� ��.

    /*for (int i = 0; i < 100; ++i)
       s1.array[i] = 0; */     // �迭 �ʱ�ȭ
    //s1.tos = 0;

    /*for (int i = 0; i < 100; ++i)
       s2.array[i] = 0; */     // �迭 �ʱ�ȭ
    //s2.tos = 0;

    initStack(&s1); 
    initStack(&s2);

    push(&s1, 100); // s1�� �ٲ�°� �ƴ϶� s1�Ǻ��纻�� �ٲ��.
                   // ->pointer�� �������ֱ� 
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
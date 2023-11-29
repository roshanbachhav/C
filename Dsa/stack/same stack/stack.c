#include<stdlib.h>
#include<stdio.h>
#include "sstackc.h"

int samestack(stack *stack1,stack *stack2){
    int i,flag = 1;
    if (stack1 -> top != stack2 ->top)
    {
        flag = 0;
        return flag;
    }
    i = stack1 -> top;
    while (i>=0)
    {
        if (stack1 -> data[i] != stack2 -> data[i])
        {
            flag = 0;
            break;
        }
        i--;
    }
    return flag;
}

void main(){

    stack s1,s2;
    init(&s1);
    init(&s2);

    //first stack ...
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);

    //second stack ...
    push(&s2,1);
    push(&s2,2);
    push(&s2,3);
    push(&s2,4);
    push(&s2,5);

    printf("first stack \n");
    display(&s1);

    printf("second stack \n");
    display(&s2);
    
    if (samestack(&s1,&s2))
    {
        printf("Stack is same \n");
    }
    else
    {
        printf("Stack are not same \n");
    }
    
}
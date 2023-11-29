#include<stdlib.h>
#include<stdio.h>
#include "sstackc.h"

int samestack(stack *s1 , stack *s2)
{
    int flag=1,i;
    if (s1->top != s2->top)
    {
        flag = 0;
        return flag;
    }
    i = s1->top;
    while (i>=0)
    {
        if (s1->data[i] != s2->data[i])
        {
            flag = 0;
            break;
        }
        i--;
        
    }
    return flag;
}

void main()
{
    stack s1;
    stack s2;
    init(&s1);
    init(&s2);

    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);

    push(&s2,1);
    push(&s2,2);
    push(&s2,3);
    push(&s2,4);
    push(&s2,50);

    printf("First stack");
    display(&s1);
    printf("sec stack");
    display(&s2);

    if (samestack(&s1,&s2))
    {
        printf("Stack are same \n");
    }
    else
    {
        printf("NOT SAME \n");
    }
    
}
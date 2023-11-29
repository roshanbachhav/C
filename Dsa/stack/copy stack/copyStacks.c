#include<stdlib.h>
#include<stdio.h>
#include "cstack.h"


void stackcpy(stack *stack1 ,stack *stack2)
{
    stack tempstk;
    int var , i;
    init(&tempstk);
    i = stack1->top;
    while (i>=0)
    {
        push(&tempstk,stack1 -> data[i]);
        i--;
    }
    while (!isempty(&tempstk))
    {
        var = pop(&tempstk);
        push(stack2,var);
    }
    
    

}

int main(){
    stack s1,s2;
    init(&s1);
    init(&s2);
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);

    stackcpy(&s1,&s2);

    printf("First stack \n");
    display(&s1);

    printf("second stack \n");
    display(&s2);

    return 0;

}
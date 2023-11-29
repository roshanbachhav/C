#include<stdlib.h>
#include<stdio.h>
#include "cstack.h"

void cpystack(stack *s1,stack *s2)
{
    stack temps;
    int var,i;
    init(&temps);
    i=s1->top;
    while (i<=0)
    {
        push(&temps , s1->data[i]);
        i--;
    }
    while (!isempty(&temps))
    {
        var = pop(&temps);
        push(s2,var);
    }
    
}
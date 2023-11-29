#include <stdio.h>
#include <stdlib.h>
#include "sstack.h"

void main()
{
    stack s;
    int ch, x;
    init(&s);
    do
    {
        printf("\t\t---MENU---\n");
        printf("1:Push \n");
        printf("2:Pop \n");
        printf("3:display \n");
        printf("4:peek \n");
        printf("5:exit \n");
        printf("select operation`s \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
                printf("Enter element in stack \n");
                scanf("%d", x);
            if (!isfull(&s))
                push(&s, x);
            else
                printf("stack is Full now \n");
            break;

        case 2:
            if (!isempty(&s))
            {
                x = pop(&s);
                printf("pop element is : %d", x);
            }
            else
            {
                printf("Stack is empty \n");
            }
            break;

        case 3:
            display(&s);
            break;

        case 4:
            if (!isempty(&s))
            {
                x = peek(&s);
                printf("peek element is = %d \n", x);
            }
            else
            {
                printf("Stack is empty \n");
            }
            break;

        case 5:
            exit(0);
            break;

        default:printf("wrong choice \n");
            break;
        }
    } while (ch!=5);
}
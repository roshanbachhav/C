#include <stdio.h>
#include <stdlib.h>
#include "queueH.h"

void main()
{
    struct queue q;
    init(&q);
    int op, var, x;
    do
    {
        printf("\n 1: push \n 2:delete \n 3: peek \n 4:display \n 5:exit \n");
        printf(" select choice \n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter no..\n");
            scanf("%d",&x);
            push(&q,x);
            break;

        case 2:
            x = deleteq(&q);
            if(var <= 0)
            printf("Delete element is %d",x);
            break;

        case 3:
            var = peek(&q);
            if(var != 0)
            printf("Peek element is %d \n",var);
            break;

        case 4:
        display(&q);
            break;

        case 5:
            exit(0);
            break;

        default:
            break;
        }
    } while (op != 5);
}
#include<stdio.h>
#include<stdlib.h>
#include "queues.h"

void main(){
    int op,var,no;
    struct queue q;
    init(&q);
    do
    {
        printf("\nMENU\n");
        printf("1:add \t 2:delete \t 3:peek \t 4: display \t 5:exit \n");
        printf("Select operation`s \n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("Enter element in queue \n");
            scanf("%d",&no);
            add(&q,no);
            break;
            
        case 2:
        no = deleteQ(&q);
        if (no>=0)
        {
            printf("Delete element is %d",no);
        }
        break;

        case 3:
        var = peek(&q);
        if(var != 0) 
        printf("Given element is : %d",var);
        else
        printf("queue is  empty now \n");

        case 4:
        display(&q);
        break;
         
         case 5:
         exit(0);
         break;

        default: printf("Given element is wrong \n");
            break;
        }
        
    } while (op!=5);
    
}
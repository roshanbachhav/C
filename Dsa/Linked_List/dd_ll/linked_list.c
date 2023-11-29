#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"


int main () {
    int ch;
    printf("Please select choice following\n");
    do
    {
        
        printf("1: Create\n");
        printf("2: display\n");
        printf("3: insert\n");
        printf("4: deleteion\n");
        printf("5: reverse\n");
        printf("6: exit\n");

        printf("Select correct choice \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: create();
            break;
        case 2: display();
            break;
        case 3: insert();
            break;
        case 4: delete();
            break;
        case 5: reverse();
            break;
        case 6: exit(0);
            break;
        }
    } while (ch!=6);
    
return 0;
}
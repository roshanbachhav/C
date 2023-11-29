#include<stdio.h>
#include<stdlib.h>
#include "reverse.h"


int main () {
    int ch;
    printf("Please select choice following\n");
    do
    {
        
        printf("1: Create\n");
        printf("2: display\n");
        printf("3: reverse\n");
        printf("4: exit\n");

        printf("Select correct choice \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: create();
            break;
        case 2: display();
            break;
        case 3: reverse();
            break;
        case 4: exit(0);
            break;
        }
    } while (ch!=4);
    
return 0;
}
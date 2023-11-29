#include<stdio.h>
#include<stdlib.h>
#include "convert.h"


int main () {
    int choice;
    do
    {
        printf("1.coin converter \n");
        printf("2.time converter \n");
        printf("3.date converter \n");
        printf("4.exit converter \n");

        printf(" select choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: coin_converter();
            break;
        case 2: time_converter();
            break;
        case 3: date_converter();
            break;
        case 4: exit(0);
            break;
        default:
        printf("wrong dicision \n");
            break;
        }

    
    } while (choice!=4);
    


return 0;
}
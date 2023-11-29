#include<stdio.h>
#include<stdlib.h>
#include "sortings.h"

void main(){
    int choice;
    do{
        printf("1:Bubble sort \t 2:selection sort \t 3:linear sort \t 4:exit \n");
        printf("Select choice \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            bubble();
            break;
        case 2:
            selection();
            break;
        // case 3:
        //     linear();
        //     break;
        case 4:
         exit(0);
            break;
        
        default:printf("wrong choice \n");
            break;
        }
    }while(choice!=4);
}
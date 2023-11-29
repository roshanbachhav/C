#include<stdio.h>
#include<stdlib.h>
#include "double_LL.h"

int main () {
    int ch;
    printf("Please select choice following\n");
    do
    {
        
        printf("1: Create\n");
        printf("2: forward_display\n");
        printf("3: insertion_first\n");
        printf("4: insertion_middle\n");
        printf("5: insertion_last\n");
        printf("6: delete_first\n");
        printf("7: delete_middle\n");
        printf("8: delete_last\n");
        printf("9: search\n");
        printf("10: exit\n");

        printf("Select correct choice \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: create();
            break;
        case 2: forward_display();
            break;
        case 3: insertion_first();
            break;
        case 4: insertion_middle();
            break;
        case 5: insertion_last();
            break;
        case 6: delete_first();
            break;
        case 7: delete_middle();
            break;
        case 8: delete_last();
            break;
        case 9: search();
            break;
        case 10: exit(0);
            break;
        }
    } while (ch!=10);
    
return 0;
}
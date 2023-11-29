#include <stdio.h>
#include <stdlib.h>
#include "pr_q.h"

void main()
{
    int n, ch;
    printf("\n 1:create \n 2:display \n 3: delete \n 4:exit \n");
    create();
    while (1)
    {
        printf("Select choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Numbe in queue \n");
            scanf("%d", &n);
            insert_by_queue(n);
            break;
        case 2:
            display_queue();
            break;
        case 3:
            printf("Delete value is \n");
            scanf("%d", &n);
            delete_by_queue(n);
            break;
        case 4:
            exit(0);

        default:
            printf("wrong input");
            break;
        }
    }
}
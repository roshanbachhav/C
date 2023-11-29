#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *nw, *temp, *ptr, *head;

void create()
{
    int i, n;
    printf("Enter the size of n \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("Enter the elements in the new Array \n");
        scanf("%d", &nw->data);
        nw->next = NULL;
        if (head == NULL)
        {
            head = ptr = nw;
        }
        else
        {
            ptr -> next = nw;
            ptr = ptr -> next;
        }
    }
}
void display()
{
    ptr = head;

    printf("\n Your Linked list data is here:\n");

    while (ptr != NULL)
    {
        printf(" -> [ %d ] ", ptr -> data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main()
{
    int i, n, choice;
    do
    {

        printf("\n\n Select the following operations \n");
        printf("1 -> Create \n");
        printf("2 -> Display \n");
        printf("3 -> Exit \n");
        printf("Select the current operation \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(0);

        default:
            printf("Opps Not valid\n");
            break;
        }
    }while (choice != 0);
}
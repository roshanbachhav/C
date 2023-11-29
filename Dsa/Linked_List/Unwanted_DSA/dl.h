#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *head = NULL, *ptr, *temp, *nw;
void create()
{
    int i, n;
    printf("Enter the value");
    for (i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &nw);
        nw->next = NULL;
        nw->prev = NULL;

        if (head == NULL)
        {
            head = ptr = nw;
        }
        else
        {
            ptr->next = nw;
            nw->prev = ptr;
            ptr = ptr->next;
        }
    }
}

void display(){
    ptr = head;
    printf("printing the data \n");
    while (ptr!= NULL)
    {
        printf("%d \t",ptr -> data);
        ptr = ptr -> data;
    }
    
}

void insert_first(){
    ptr = head;
    int pos,count=1;
    printf("Enter the data on first \n");
    nw = (struct node *)malloc(sizeof(struct node));
    nw -> next = NULL;
    nw -> prev = NULL;
    nw -> next = head;
    head -> prev = nw;
    head = nw;
}

void insert_middle(){
    int cnt = 1, pos;
    ptr = head;
    
}
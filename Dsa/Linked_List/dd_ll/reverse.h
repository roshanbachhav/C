#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL , *nw , *ptr, *temp;

void create(){
    int i,n;
    printf("Enter number for nodes \n");
    scanf("%d",&n);
    printf("Enter Element in node \n");
    for ( i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&nw -> data);
        nw -> next =NULL;
        if(head == NULL){
            head = ptr = nw;
        }
        else{
            ptr -> next = nw;
            ptr = ptr -> next;
        }
    }
}

void display(){
    ptr = head;
    printf("Printing elements of node \n");
    while (ptr != NULL)
    {
        printf("%d \t",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

void reverse(){
    struct node *p,*q,*r;    
    ptr = head;
    p=q=r=head;
    p = p -> next -> next;
    q = q -> next;
    r -> next = NULL;
    q -> next = r;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }
    head = q;
    printf("Reverse order elements \n");
    display();
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*ptr,*newNode,*temp;

void create() {
    int i,n;
    printf("Enter element for nodes \n");
    scanf("%d",&n);

    printf("Enter elemens :: \n");
    for ( i = 0; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newNode->data);
        newNode ->next =NULL;
        if (head == NULL)
        {
            head = ptr = newNode;
        }
        else{
            ptr -> next = newNode;
            ptr = ptr -> next;
        }
        
    }
}

void display() {
    ptr = head;
    printf("Printing elements is following \n");
    while (ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

void revers(){
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
    display();
    
}

void main(){
    int ch;
    do
    {
        printf("1 . create \n");
        printf("2 . display \n");
        printf("3 . reversed order \n");
        printf("4 . exit \n");

        printf("Select choice \t");
        scanf("%d",&ch);
        
    switch (ch)
    {
    case 1:
         create();
        break;
    case 2:
         display();
        break;
    case 3:
         revers();
        break;
    case 4: exit (0);
        break;
    }
    } while (ch!=4);
    
}
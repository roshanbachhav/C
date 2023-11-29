#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

struct node *ptr, *head = NULL, *nw, *temp;

void create()
{
    int i, n;

    printf("Enter how many node what you want \n");
    scanf("%d", &n);
    printf("Enter element in node \n");
    for (i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &nw->data);
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

void display()
{
    ptr = head;
    printf("Element are following \n");
    while (ptr != NULL)
    {
        printf("\t %d \t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert(){
    int pos,cnt=1;
    ptr = head;
    printf("Enter position \n");
    scanf("%d",&pos);
    printf("Enter element in node \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw->data);
    nw->next=NULL;
    nw->prev=NULL;
    if (pos == 1)
    {
        nw -> next = head;
        nw = head;
    }
    else
    {
        while (cnt != pos-1)
        {
            ptr = ptr -> next;
            cnt++;
        }
        ptr -> next = nw -> next;
        nw -> prev = ptr -> next;
        ptr -> next = nw;
        nw -> prev = ptr;
    }
    
}

void delete(){
    ptr = head;
    int pos , cnt =1;
    printf("Enter element can you delete \n");
    scanf("%d",&pos);
    if (pos == 1)
    {
        temp = head;
        head = head -> next;
        free(temp);
    }
    else
    {
        while (cnt!=pos-1)
        {
            ptr = ptr -> next;
            cnt++;
        }
        temp = ptr -> next;
        ptr -> next = temp -> next;
        temp -> next -> prev = ptr;
        free(temp);
    }
    
}

void search(){
    int ele,flag=0;
    ptr = head;
    printf("Enter number you can search \n");
    scanf("%d",ele);
    while (ptr!=NULL)
    {
        if (ptr->data == ele)
        {
            flag=1;
            break;
        }
        else
        {
            ptr = ptr -> next;
        }
    }
    if (flag == 1)
    {
        printf("Given element are present %d \n",ptr->data);
    }
    else
    {
        printf("Element can not present \n");
    }
    
}
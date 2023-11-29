#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next , *prev;
};

struct node *head = NULL,*nw,*temp,*ptr;

void create(){
    int i,n;
    printf("Enter node size \n");
    scanf("%d",&n);

    printf("Enter element in nodes \n");
    for(i = 0; i < n; i++){
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&nw->data);
        nw->next=NULL;
        nw->prev=NULL;
        if (head == NULL)
        {
            head = ptr = nw;
        }
        else
        {
            ptr->next = nw;
            nw -> prev = ptr;
            ptr = ptr -> next;
        }
    }
}

void forward_display(){
    ptr = head;
    printf("Element is following \n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

void insertion_first(){
    ptr=head;
    printf("Enter element at first position \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw->data);
    nw -> next = NULL;
    nw -> prev = NULL;
    ptr -> next = head;
    head -> prev = nw;
    head = nw;
}


void insertion_middle(){
    int pos , count=1;
    ptr = head;
    printf("Enter element can we add \n");
    scanf("%d",&pos);
    nw = (struct node *)malloc(sizeof(struct node));
    printf("Enter element \n ");
    scanf("%d",&nw->data);
    nw -> next = NULL;
    nw -> prev = NULL;
    while(count!=pos-1)
    {
        ptr = ptr -> next;
        count++;
    }
    nw -> next = ptr -> next;
    ptr -> next -> prev = nw;
    ptr -> next = nw;
    nw -> prev = ptr;
}

void insertion_last(){
    int pos,count = 1;
    ptr = head;
    printf("Enter element in last position \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw->data);
    nw -> next = NULL;
    nw -> prev = NULL;
    while(ptr->next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr -> next = nw;
    nw -> prev = ptr;
}

void delete_first(){
    ptr = head;
    temp = head;
    head = head -> next;
    head -> prev = NULL;
    free(temp);
}

void delete_middle(){
    int pos , count = 1;
    ptr = head;
    printf("Enter number for delete middle position \n");
    scanf("%d",&pos);
    while(count!=pos-1)
    {
        ptr = ptr -> next;
        count++;
    }
    temp = ptr -> next;
    ptr -> next = temp -> next;
    temp -> next -> prev = ptr;
    free(temp);
}

void delete_last(){
    ptr = head;
    while(ptr-> next!= NULL)
    {
        ptr = ptr -> next;
    }
    temp = ptr;
    ptr -> prev -> next = NULL;
    free(temp);
}

void search(){
    int ele,flag=0;
    ptr = head;
    printf("Enter element \n");
    scanf("%d",&ele);
    while(ptr!=NULL)
    {
        if (ptr -> data == ele)
        {
            flag = 1;
            break;
        }
        else
        {
            ptr = ptr -> next;
        }
    }
    if (flag == 1)
    {
        printf("Element was found :: %d \n",ptr -> data);
    }
    else{
        printf("Element was not found \n");
    }
}
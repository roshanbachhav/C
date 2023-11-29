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
    printf("Enter how many element \n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("Enter elements in node \n");
        scanf("%d",&nw->data);
        nw->next=NULL;
        if (head==NULL)
        {
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
    printf("Link_list elements are following \n");
    while(ptr!= NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


 void insert()
 {
   int n,count=1;
   ptr = head;
   printf("Enter element for how many node what you want \n");
   scanf("%d",&n);
   printf("Enter element in nodes \n");
   nw = (struct node *)malloc(sizeof(struct node));
   nw -> next =NULL;
   if (n==1)
   {
      nw -> next = head;
      head = nw;
   }
   else{
      while (count != n - 1)
      {
         ptr = ptr -> next;
         count++;
      }
      nw -> next = ptr -> next;
      ptr -> next = nw;
   }
 }

 void delete(){
    int position,count=1;
    printf("Enter position for delete value \n");
    scanf("%d",&position);

    if (position == 1)
    {
        temp = head;
        head = head -> next;
        free(temp);
    }
    else{
        while (count != position-1)
        {
            ptr = ptr -> next;
            count++;
        }
        temp = ptr -> next;
        ptr -> next = temp -> next;
        free(temp);
    }
 }

void reverse(){
    struct node *p,*q,*r;
    p = q = r = head;
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
    printf("Reverse order is following");
    display();
}

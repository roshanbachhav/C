#include<stdio.h>
#include<stdlib.h>

struct node{
    int number;
    struct node *next;
};

void print(struct node *ptr){
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->number);
        ptr = ptr->next;
    }
    
}


int main () {
  struct node *head;
  struct node *second;  
  struct node *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head -> number = 5;
  head -> next = second;

  second -> number = 50;
  second -> next = third;

  third -> number = 500;
  third -> next = NULL;

  print(head);
return 0;
}
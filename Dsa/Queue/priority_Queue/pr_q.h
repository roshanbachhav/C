#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int pri_que[MAX];
int front, rear;

void insert_by_queue(int);
void delete_by_queue(int);
void create();
void check(int);
void display_queue();

void create(){
    front = rear = -1;
}

void insert_by_queue(int data)
{
    if (rear >= MAX-1)
    {
        printf("Queue is overflow \n");
        return;
    }
    if ((front == -1)&&(rear == -1))
    {
        front++;
        rear++;
        pri_que[rear] = data;
        return;
    }
    else
    {
        check(data);
        rear++;
    }
    
}

void check(int data)
{
    int i,j;
    for ( i = 0; i <= rear; i++)
    {
        if (data >= pri_que[i])
        {
            for ( j = rear+1; j > i; j--)
            {
                pri_que[j] = pri_que[j-1];
            }
            pri_que[i] = data;
            return;
            
        }
        
    }
    pri_que[i]=data;
}


void delete_by_queue(int data)
{
    int i;
    for ( i = 0; i <= rear; i++)
    {
        if (data == pri_que[i])
        {
            for ( i = 0; i < rear; i++)
            {
                pri_que[i] = pri_que[i+1];
            }
            pri_que[i] = -99;
            rear--;
            if (rear == -1)
            front=-1;
            return;
        }
        
    }
    printf("%d not element \n",data);
    
}

void display_queue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n");
    }
    
    for ( front = 0; front <= rear; front++)
    {
        printf("%d \n",pri_que[front]);
    }
    front = 0;
    
}
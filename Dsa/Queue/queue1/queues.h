#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct queue
{
    int data[MAX];
    int front,rear;
};

void init(struct queue *q);
void add(struct queue *q,int x);
int deleteQ(struct queue *q);
int isempty(struct queue *q);
int isfull(struct queue *q);
int peek(struct queue *q);
void display(struct queue *q);

void init(struct queue *q){
    q -> front = q-> rear = -1;
}

void add(struct queue *q,int x){
    if(!isfull(q))
    {
        if (q -> front == -1 && q -> rear == -1)
        {
            q->rear++;
            q -> data [q->rear] = x;
            q -> front = q -> rear;
        }
       else
       {
        q->rear++;
        q->data[q->rear]=x;
       }
    }
    else
    {
        printf("Queue is overflow now \n");
    }
}

int deleteQ(struct queue *q){
    int x;
    if(!isempty(q) && q->front <= q->rear)
    {
        x = q->data[q->front];
        q->front++;
    }
    else
    {
        printf("Queue is Underflow now \n");
        return (x);
    }
}

int isempty(struct queue *q){
    if (q -> front == -1 && q -> rear == -1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
    
}

int isfull(struct queue *q){
    if ((q->rear == MAX-1))
    {
        return (1);
    }
    else
    {
        return (0);
    }
    
}

int peek(struct queue *q){
    if (!isempty(q) && q->front <= q-> rear)
    {
        return(q->data[q->front]);
    }
    else
    {
        return (0);
    }
    
}

void display(struct queue *q){
    int i;
    if ((q-> front == -1 || q-> front >= q->rear))
    {
        printf("queue is empty");
    }
    else
    {
        i = q->front;
        while(i <= q->rear)
        {
            printf("\n %d \t",q->data[i]);
            i++;
        }
        printf("\n");
    }
    
}
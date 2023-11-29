#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct queue
{
    int data[MAX];
    int front,rear;
};

void init(struct queue *q);
void add(struct queue *q,int x);
int deleteq(struct queue *q);
int isfull(struct queue *q);
int isempty(struct queue *q);
int peek(struct queue *q);
void display(struct queue *q);

void init(struct queue *q){
    q -> front = q -> rear = -1;
}

void add(struct queue *q,int x){
    if (!isfull(q))
    {
        if (q -> front == -1 && q-> rear == -1)
        {
            q->rear++;
            q->data[q->rear] = x;
            q->front = q->rear;
        }
        else
        {
            q->rear++;
            q -> data[q->rear] = x;
        }
        
    }
    else
    {
        printf("queue is full now \n");
    }
    
}

int deleteq(struct queue *q){
    int x;
    if ((!isempty(q)) && (q->front <= q->rear))
    {
        x = q->data[q->front];
        q->front++;
    }
    else
    return 0;
}

int isempty(struct queue *q){
    if (q -> front == -1 && q -> rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isfull(struct queue *q){
    if (q->rear == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int peek(struct queue *q){
    if (!isfull(q) && q->front <= q-> rear)
    {
        return(q->data[q->front]);
    }
    else
    {
        return 0;
    }
    
}

void display(struct queue *q){
    int i;
    i = q->front;
    if (q->front == -1 || q->front >= q-> rear)
    {
        printf("queue is empty now \n");
    }
    else
    {
        while (i<=q->rear)
        {
            printf("\n %d \t",q->data[i]);
            i++;
        }
    }   
    printf("%d \n");
}
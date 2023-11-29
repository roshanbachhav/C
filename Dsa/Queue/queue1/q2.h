#include <stdio.h>
#include <stdlib.h>
#define M 5
struct queue
{
    int data[M];
    int front, rear;
};

void init(struct queue *q);
void push(struct queue *q, int x);
int deleteq(struct queue *q);
int peek(struct queue *q);
void display(struct queue *q);
int isfull(struct queue *q);
int isempty(struct queue *q);

void init(struct queue *q)
{
    q->front = q->rear = -1;
}

void push(struct queue *q, int x)
{
    if (!isfull(q))
    {
        printf("Qeueue is overflow now \n");

        if (q->front == -1 && q->rear == -1)
        {
            q->rear++;
            q->data[q->rear] = x;
            q->front = q->rear;
        }
        else
        {
            q->data[q->rear] = x;
            q->rear++;
        }
    }
    else
    {
        printf("Queue is full \n");
    }
}

int deleteq(struct queue *q)
{
    int x;
    if (!isempty(q) && q->front <= q->rear)
    {
        x = q->data[q->front];
        q->front++;
    }
    else
    {
        printf("queue is empty \n");
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct queue *q)
{
    if (q->rear == M - 1 && q->front <= q->rear)
    {
        return 1;
    }
    else
        return 0;
}

int peek(struct queue *q)
{
    if (!isempty(q) && q->front <= q->rear)
    {
        return(q->data[q->front]);
    }
    
}

void display(struct queue *q)
{
    int i;
    i = q->front;
    if (q->front == -1 || q->front >= q->rear)
    {
        printf("queue is empty");
    }
    else
    {
        while (i < q->rear)
        {
            printf("\n %d \t", q->data[i]);
            i++;
        }
    }
}
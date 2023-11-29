#include<stdio.h>
#define MAX 5

int p_q[MAX];
int front,rear;

void i_b_pq(int);
void d_b_pq(int);
void create();
void check(int);
void display_pq();

void create(){
    front = rear = -1;
}

void i_b_pq(int data)
{
    if (rear >= MAX-1)
    {
        printf("Queue is empty \n");
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        p_q[rear] = data;
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
        if (data >= p_q[i])
        {
            for ( j = 0; j > i; j--)
            {
                p_q[j] = p_q[j-1];
            }
            p_q[i] = data;
            return;
        }
        
    }
    
}

void d_b_pq(int data)
{
    int i;
    for ( i = 0; i <= rear; i++)
    {
        for ( i = 0; i < rear; i++)
        {
            if (data == p_q[i])
            {
                p_q[i] = p_q[i+1];
            }
            p_q[i] = -99;
            rear--;
            if(rear == -1)
            front = -1;
            return;
        }
        
    }
    printf("%d is not delete \n",data);
    
}

void display_pq()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty \n");
    }
    
    for ( front = 0; front <= rear; front++)
    {
        printf("\n\n%d\n",p_q[front]);
    }
    
    
}
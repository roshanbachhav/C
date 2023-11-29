#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct stack
{
    int data[MAX];
    int top;
}stack;

void init(stack *);
int isfull(stack *);
int isempty(stack *);
void push(stack *,int);
int pop(stack *);
int peek(stack *);
void diaplay(stack *);

void init(stack *s)
{
    s-> top = -1;
}

int isempty(stack *s)
{
    if(s->top == -1)
    return 1;
    return 0;
}
int isfull(stack *s)
{
    if(s -> top == MAX -1)
    return 1;
    return 0;
}

void push(stack *s,int x)
{
    s->top = s->top+1;
    s->data[s->top] = x;
}
int pop(stack *s)
{
    int x;
    x = s->data[s->top];
    s->top = s->top -1;
    return x;
}

int peek(stack *s)
{
    return(s -> data[s->top]);
}

void display(stack *s)
{
    int i;
    // printf("Display");
    if (!isempty(s))
    {
        for ( i = s->top; i >= 0; i--)
        {
            printf("%d",s->data[i]);
        }
        
    }
    else
    {
        printf("Stack is empty \n");
    }
    
}
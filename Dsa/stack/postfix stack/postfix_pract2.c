#include <stdio.h>
#include <string.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top]=x;
}

int pop()
{
    return (stack[top--]);
}

void evalpost(char exp[])
{
    char *e;
    int n1, n2, n3, num;
    e = exp;
    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch (*e)
            {
            case '+':
                n3 = n1 + n2;
                break;
            case '-':
                n3 = n2 - n2;
                break;
            case '*':
                n3 = n1 * n2;
                break;
            case '/':
                n3 = n2 / n1;
                break;
            }
            push(n3);
        }
        e++;
    }
    printf("Result of expression %s=%d", exp, pop());
}

int main()
{
    char temp[20], exp[20];
    char *t, *e;
    int n1, n2, n3, i, j, num;
    printf("Enter exp \n");
    scanf(" %s", exp);
    for ( i = 0; i < strlen(exp); i++)
    {
        if (isalpha(exp[i]))
        {
            printf("Enter exp %c \n",exp[i]);
            printf("Enter num \n");
            scanf("%d",&num);
            num = num + 48;
            for ( j = i+1; j < strlen(exp); j++)
            {
                if (exp[j] == exp[i])
                {
                    exp[j] = num;
                }
                
            }exp[i] = num;
            
        }
        
    }

    printf("Given expression \n");
    puts(exp);
    printf("Evalution expression \n");
    evalpost(exp);

    
}
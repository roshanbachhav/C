#include <stdio.h>
#include <string.h>
int stack[20];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
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
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("\nResult of expression %s=%d\n\n", exp, pop());
}

int main()
{
    char exp[20], temp[20];
    char *e, *t;
    int n1, n2, n3, num, i, j;
    printf("Enter expression ");
    scanf("%s", exp);
    for (i = 0; i < strlen(exp); i++)
    {
        if (isalpha(exp[i]))
        {
            printf("\nEnter value %c ", exp[i]);
            scanf("%d", &num);
            num = num + 48;
            for (j = i + 1; j < strlen(exp); j++)
            {
                if (exp[j] == exp[i])
                {
                    exp[j] = num;
                }
            }
            exp[i] = num;
        }
    }
    printf("\nGiven expression ");
    puts(exp);
    printf("\nEvaluation expression ");
    evalpost(exp);
    return 0;
}

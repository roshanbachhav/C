#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pelistk.h"

void main()
{
    stack s;
    init(&s);
    int len,count=0,i;
    char str[30];

    printf("Enter string \n");
    scanf("%s",str);
    len = strlen(str);
    for ( i = 0; i < len; i++)
    {
        push(&s,str[i]);
    }
    for ( i = 0; i < len; i++)
    {
        if (str[i] == pop(&s))
        count++;
    }

    if (count == len)
    {
        printf("Given string is pelindrome \n");
    }
    else
    {
        printf("not pelindrome \n");
    }
    
    
}
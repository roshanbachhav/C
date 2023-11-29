#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pelistk.h"

void main()
{
    stack s;
    init(&s);
    char str[20];
    int len,cnt=0,i;
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
        cnt++;
    }

    if (cnt == len)
    {
        printf("Pelin \n");
    }
    else
    {
        printf("Not peli \n");
    }
    
    
    
}
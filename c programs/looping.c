#include<stdio.h>
void main()
{
    int i=3;
    i++;
    if (i==4)
    {
        ++i;
    }
    for ( i = 0; i < 10; i++)
    {
        i++;
    }
    for ( i = 0; i < 30; i++)
    {
        printf("%d \n",i);
    }
}
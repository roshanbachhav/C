#include<stdio.h>

int main () {
    int a[100];
    int positive=0,n;
    int negative=0,i;
    printf("Enter size of array \n");
    scanf("%d",&n);
    printf("Enter value in arrays \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
    if(a[i]>0 || 999<a[i])
    {
        positive++;
    }
    else
    {
        negative++;
    }
    }
    printf("total positive numbers %d \n",positive);
    printf("total nigetive numbers %d \n",negative);
    
    
return 0;
}
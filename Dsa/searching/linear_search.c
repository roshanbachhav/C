#include<stdio.h>

int main () {
    int i,x,n,a[50];
    printf("Enter n element \n");
    scanf("%d",&n);
    printf("Enter element in arrays \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number you can search \n");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        if(a[i] == x)
        break;
    }
    if (i<n)
    {
        printf("Element is present %d",a[i]);
    }
    else
    {
        printf("Element is not present");
    }
    
    
return 0;
}
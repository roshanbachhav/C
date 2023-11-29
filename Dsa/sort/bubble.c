#include<stdio.h>
#define MAX 500

int main () {
    int a[MAX],i,j,temp,n;
    printf("How many element what you want \n ");
    scanf("%d",&n);
    printf("Enter element in array \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    printf("Printed element are followings \n");

    for ( i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    
return 0;
}
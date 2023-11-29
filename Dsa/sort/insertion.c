#include<stdio.h>
#define MAX 500

int main () {
    int i,j,n,temp,a[MAX];
    printf("Enter how many element want \n");
    scanf("%d",&n);
    printf("Enter element in array \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 1; i <= n-1; i++)
    {
        j=i;
        while (j>0 && a[j-1]>a[j])
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
        
    }
    printf("printed element \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    
    
    
return 0;
}
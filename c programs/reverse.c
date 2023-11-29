#include<stdio.h>

int main () {
    int n;
    int a[50];
    printf("Enter How many element you want \n");
    scanf("%d",&n);
    printf("Enter element in array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse elements \n");
    for (int i = n-1; i >= 0; i--){
        printf("%d \n",a[i]);
    }
   
return 0;
}
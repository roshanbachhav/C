#include<stdio.h>

void display(int n){
    printf("Enter number for table \n");
    // scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n",n,i,n*i);
    }
}

int main () {
    int x;
    printf("Enter number you can make multiplication table \n");
    scanf("%d",&x);
    display(x);
    
return 0;
}
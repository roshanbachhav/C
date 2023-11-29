#include<stdio.h>
int m1(int n){
    if (n <= 1)
    {
        return 1;
    }
    else{
    return n * m1 (n-1);
}
}

int main () {
    int n,fact;
    printf("Enter element \n");
    scanf("%d",&n);
    fact = m1(n);
    printf("%d \n",fact);
return 0;
}
#include<stdio.h>

int main () {
    int n,rev=0,rem,refNo;
    printf("Enter number \n");
    scanf("%d",&n);
    refNo=n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (refNo == rev)
    {
        printf("given number is pelindrome \n");
    }
    else{
        printf("given number is not pelindrome \n");
    }
    
    
return 0;
}
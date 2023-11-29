#include<stdio.h>

void palindrome(){

    int n, rev = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(rev == temp){
        printf("%d is a palindrome number.", temp);
    }
    else{
        printf("%d is not a palindrome number.", temp);
    }

    }

int main(){
    
//    int n=121;
    palindrome();
    return 0;
}
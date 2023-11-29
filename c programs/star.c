#include<stdio.h>

int main () {
    int i,j,n;
    printf("Enter row and columns :: \t");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        printf("\n");
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
return 0;
}
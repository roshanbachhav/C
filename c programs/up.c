#include<stdio.h>

int main () {
    int i;
    char a[50];
    printf("Enter string \n");
    scanf("%s",a);

    // printf("Uppercase convrter \n");

    for ( i = 0; a[i]!= '\0'; i++)
    {
        if (a[i]>=97 && a[i]<=122)
        {
            a[i]= a[i]-32;
        }
        
    }
    printf("UPPERCASE String is : %s ",a);  
return 0;
}
#include <stdio.h>
int main() {
    int no, realno, reminder, result=0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &no);
    realno = no;

    while (realno != 0) {
          reminder = realno % 10;
        
       result = result + reminder * reminder * reminder;
       realno /= 10;
    }

    if (result == no)
        printf("%d is arm no.", no);
    else
        printf("%d is not arm no", no);

   return 0;
}
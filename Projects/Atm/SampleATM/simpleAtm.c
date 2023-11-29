#include<stdio.h>
#include<stdlib.h>

void main(){
    float a,b;
    int ch;
    printf("\n\n");
    printf("-------------------------Welcome to RV Bank------------------------- \n");
    printf("\n\n");

    printf("Please Add some money for working all proccess \n");
    scanf("%f",&a);

    printf("------------------------- please select correct choice -------------------------\n");
    do{
    printf("1. Balance Enquiry \n");
    printf("2. Credit the Amount \n");
    printf("3. Debit the Amount \n");
    printf("4. Exit \n");

    printf("Enter correct choice \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        if(a==a){
    printf("------------------------------------------------------------------------------\n");
        printf("Given Balance is %.2f \n",a);
    printf("------------------------------------------------------------------------------\n");
        }
        break;
    case 2:
        printf("\n");
        printf("How many credit on Balance \n");
        scanf("%f",&b);
        a = a + b;
    printf("------------------------------------------------------------------------------\n");
        printf("New amount is :: %.2f",a);
    printf("------------------------------------------------------------------------------\n");
        break;
    case 3:
        printf("\n");
        printf("How many Debit on Balance \n");
        scanf("%f",&b);
    printf("------------------------------------------------------------------------------\n");
        printf("You Debit :: %.2f rs \n",b);
    printf("------------------------------------------------------------------------------\n");
        if (a>=b)
        {
            a = a - b;
    printf("------------------------------------------------------------------------------\n");
            printf("Successful. current balance in your account are:: %.2f \n",a);
    printf("------------------------------------------------------------------------------\n");
        }
        else{
    printf("------------------------------------------------------------------------------\n");
            printf("Not enough Balance!\n");
    printf("------------------------------------------------------------------------------\n");
        }
        break;

    case 4:
        printf("--------------------------Thank you sir getting importent time--------------------------");
        exit(0);
        break;

    default:
    printf("------------------------------------------------------------------------------\n");
    printf("please suggest correct! dont input invalid text \n");
    printf("------------------------------------------------------------------------------\n");
        break;
    }
    }while(ch!=4);
    
    
}

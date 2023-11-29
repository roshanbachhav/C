#include<stdio.h>
void main()
{
    int number1;
    int number2;

    printf("Enter the first element \n");
    scanf("%d",&number1);
    
    printf("Enter the Second element \n");
    scanf("%d",&number2);

    if(number1 > number2)
    {
        int big_Diffrence = number1 - number2;
        printf("[ %d ] is greater then [ %d ] and the diffrence are ---> [ %d ]",number1,number2,big_Diffrence);     
        
    }
    else
    {
        printf("The number is smaller \n");
    }

}
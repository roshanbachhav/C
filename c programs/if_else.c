#include <stdio.h>
#include <stdlib.h>



int if_else(int age)
{
    if (age >= 18)
    {
        printf("Are you eligible for voting \n");
    }
    else
    {
        printf("Not eligible for voting \n");
    }
    return 0;
}

int nested_if_else(int age)
{
    if (age >= 18)
    {
        if (age >= 18 && age <= 25)
        {
            printf("You are eligible for voting");
        }
        else
        {
            printf("You are good citizen");
        }
    }
    else
    {
        printf("You are children now");
    }
    return 0;
}
int if_else_ladder(int age)
{
    if (age >= 18 && age <= 20)
    {
        printf("You are eligible for voting \n");
    }
    else if (age >= 20 && age <=35)
    {
        printf("You eligible for politics \n");
    }
    else if(age >= 36 && age <=100)
    {
        printf("You are good citizen \n");
    }
    else
    {
        printf("You are child now! \n");
    }
    return 0;
}


void main()
{
    int ch,age;
    printf("Enter age \n");
    scanf("%d", &age);
    printf("1:if else \t 2:nested if else \t 3:if else ladder \n");
    printf("Select correct choice \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        if_else(age);
        break;
    case 2:
        nested_if_else(age);
        break;
    case 3:
        if_else_ladder(age);
        break;
    
    default:printf("Enter correct choice");
        break;
    }
}

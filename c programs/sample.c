#include<stdio.h>
void main(){
    // int roll_no,m1,m2,m3,m4,m5;
    int roll_no;
    char name[33];
    float Total_mark,science , math , english , marathi;
    printf("Enter the mark under 100. \n\n");
    printf("Enter Roll number \n");
    scanf("%d",&roll_no);
    printf("Enter name \n");
    scanf("%s",name);
    printf("Enter science marks \n");
    scanf("%f",&science);
    printf("Enter math marks \n");
    scanf("%f",&math);
    printf("Enter english marks \n");
    scanf("%f",&english);
    printf("Enter marathi marks \n");
    scanf("%f",&marathi);
    Total_mark = (science + math + english + marathi)/4;
    printf("The total marks of the %s is %f",name,Total_mark);
}
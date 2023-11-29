// 1: Write a C program to accept and display details of one student [roll number, name, percentage] using structure.


/*
#include <stdio.h>
struct student
{
char name[50];
int roll;
float per;
}s;
void main()
{
printf("\nEnter name of the student: ");
scanf("%s", s.name);
printf("\nEnter roll number of the student: ");
scanf("%d", &s.roll);
printf("\nEnter Percentage of the student: ");
scanf("%f", &s.per);
printf("\nDisplaying Information:\n");
printf("\nName:%s\n ",s.name);
printf("\n Roll number: %d\n",s.roll);
printf("\nPercentage: %f\n\n",s.per);
}

*/

// 2: Write a program to create a structure student [rollno, name, percentage]. Initialize values for one student and display the same.

/*

#include <stdio.h>
struct student
{
char name[50];
int roll;
float per;
};
void main()
{
struct student s={"Ram",14,98};
printf("\nDisplaying Information..\n");
printf("\nName: %s\n",s.name);
printf("\nRoll number: %d\n",s.roll);
printf("\nPercentage: %f\n\n",s.per);
}

*/

// 3: Write a program to accept and display details of 5 students [roll no,name, percentage] using structure.

/*

#include<stdio.h>
struct student 
{
 char name[20];
 int rollno;
 float per;
}s[50];
void main( )
{
 int i,n;
 printf("Enter how many records u want to store :: ");
 scanf("%d",&n);
 printf("Enter name, roll no. and Percentage Below :: \n");
 for(i=0; i<n; i++)
 {
 printf("\nEnter Name :: ");
 scanf("%s",s[i].name);
 printf("Enter RollNo. :: ");
 scanf("%d",&s[i].rollno);
 printf("Enter Percentage:: ");
 scanf("%f",&s[i].per);
 }
 printf("\n\tName\tRollNo\tPercentage\t\n");
 for(i=0; i<n; i++)
 printf("\t%s\t%d\t%f\t\n", s[i].name, s[i].rollno, s[i].per);
}

*/

#include<stdio.h>

int main()   
{   
 int i, no, Sum = 0 ;   
  
 printf("Please Enter any no \n") ;   
 scanf("%d", &no) ;   
 
 for(i = 1 ; i < no ; i++)   
  {   
   if(no % i == 0)   
     Sum += i ;   
  }    

 if (Sum == no)   
    printf("%d is a Perfect no \n", no) ;   
 else   
    printf("%d is not the Perfect no", no) ;   

return 0 ;   
}
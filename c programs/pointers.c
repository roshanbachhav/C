// Write a C program program to input and print array elements using pointers.
#include <stdio.h>
void main()
{
 int arr[50];
 int n, i;
 int * ptr; 
 ptr = arr; // Pointer to arr[0] 
 printf("\nEnter size of array: ");
 scanf("%d", &n);
 printf("\nEnter elements in array:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", ptr);
 // Move pointer to next array element
 ptr++; 
 }
 // Make sure that pointer again points back to first array element
 ptr = arr;
 printf("\nArray elements: ");
 for (i = 0; i < n; i++)
 {
 // Print value pointed by the pointer
 printf("\n%d", *ptr);
 // Move pointer to next array element
 ptr++;
 }
}

// Write a C program to Reverse array using Pointers. 
#include<stdio.h>
void main()
{
 int size, i, arr[50];
 int *ptr;
 ptr = &arr[0];
 printf("Enter the size of array :");
 scanf("%d", &size);
 printf("\nEnter array elements:");
 for (i = 0; i < size; i++)
 {
 scanf("%d", ptr);
 ptr++;
 }
 ptr = &arr[size - 1];
 printf("\nElements of array in reverse order are :\n");
 for (i = size - 1; i >= 0; i--) 
 {
 printf("\n%d ", *ptr);
 ptr--;
 }
}


// Write a C program to read n integers and store them in an array using pointers. Print their sum and average
#include<stdio.h>
void main()
{
 int a[10],sum=0,n;
 float avg=0;
 int i,*ptr;
 printf("\nHow many elements:");
 scanf("%d",&n);
 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 ptr=a;
 for(i=0;i<n;i++)
 {
 sum=sum+*ptr; // 0+5=5+2=7
 ptr++;
 }
 avg = sum/n;
 printf("\nSum is = %d", sum);
 printf("\nAverage is = %f", avg);
}

// Find the largest element in array using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
void main()
{
 int a[50],i, n,*ptr;
 printf("How many elements you want to add : ");
 scanf("%d", &n);
 // Allocates memory for 'n' elements.
 ptr = (int*)malloc(n*sizeof(int));
 printf("\nEnter the array elements:");
 for(i = 0; i < n; ++i)
 {
 scanf("%d", &a[i]); 
 }
 ptr=a; 
 for(i = 1; i < n; ++i)
 {
 if(*ptr < *(ptr + i))
 *ptr = *(ptr + i);
 }
 printf("\nLargest Element = %d", *ptr);
}

 // Write a C program to swap two numbers using pointers.
 #include <stdio.h>
 void main()
 {
 int x, y, *a, *b, temp;
 printf("\nEnter the value of x and y:");
 scanf("%d%d", &x, &y); 
 printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 a = &x;
 b = &y;
 temp = *b; 
 *b = *a; 
 *a = temp; 
 printf("After Swapping\nx = %d\ny = %d\n", x, y);
 }
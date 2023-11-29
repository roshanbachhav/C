#include<stdio.h>
#include<stdlib.h>

void bubble(){
    int i,j,n,a[50],temp;
    printf("Enter element for size of array \n");
    scanf("%d",&n);
    printf("Enter element`s in array \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    printf("printing element are \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d \t ",a[i]);
    }
    printf("\n");
}

void selection(){
    int indexof,n,temp,a[50],i,j;
    printf("Enter 'n' element \n");
    scanf("%d",&n);
    printf("Enter element in arrays \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        indexof = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[indexof])
            {
                indexof = j;
            }
        }
        {
            temp = a[i];
            a[i] = a[indexof];
            a[indexof] = temp;
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("\t %d \t",a[i]);
    }
    printf("\n");
    
    
}
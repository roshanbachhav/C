#include<stdio.h>

void main()
{
    int a[100][100],i,j,r,c;
    // b[100][500],c[100][100],

    printf("Enter row for array \n");
    scanf("%d",&r);
    printf("Enter column for array \n");
    scanf("%d",&c);

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Enter value for a[%d][%d] \n",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Printed array is \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
        
    }
    
    
}
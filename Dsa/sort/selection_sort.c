#include<stdio.h>



void selectionSort(int a[10],int n){
    int j,indof,i,temp;
    for ( i = 0; i < n-1; i++)
    {
        indof = i;
        for ( j = i+1; j < n; j++){
            if (a[j] < a[indof])
            {
                indof = j;
            }
        }
        {
            temp = a[i];
            a[i] = a[indof];
            a[indof] = temp;
        }
        
    }
    printf("printing elements following \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
}

int main () {

    int n,i,a[10];

    printf("Enter n element \n");
    scanf("%d",&n);

    printf("Enter element in array \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    // printElement(a,i,n);
    selectionSort(a,n);
    
return 0;
}
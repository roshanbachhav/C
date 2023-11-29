#include <stdio.h>  
 
void counting_sort(int a[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[a[j]] = C[a[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[a[j]]] = a[j];
        C[a[j]] = C[a[j]] - 1;
    }
    printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}
int main()
{
    int n, k = 0, a[15], i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    printf("\nEnter the elements to be sorted :\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > k) {
            k = a[i];
        }
    }
    counting_sort(a, k, n);
    printf("\n");
    return 0;
}
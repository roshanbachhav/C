#include <stdio.h>
#define MAXSIZE 1024

int main()
{
    int i, j, a[MAXSIZE], temp, n;
    printf("Enter the number for size of array: \t");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the index -> [%d] \t", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= n - 1; i++)
    {
        j = i;

        while (j > 0 && a[j - 1] > a[j])
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

// First mistake will be do in the while loop -> i will initilize the a[j + 1] < a[j].
// Second mistake will be do inner the while loop -> i will first initialize the a[j+1] they are a[j-1].

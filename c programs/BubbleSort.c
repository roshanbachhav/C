#include <stdio.h>
#define MAXSIZE 20

int main()
{
    int n, i, j, a[MAXSIZE], temp;
    printf("Enter the number for size of the array \n");
    scanf("%d", &n);
    printf("Enter the elements in the array \n");

    for (i = 0; i < n; i++)
    {
        printf("Enter elements -> [%d] \t ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
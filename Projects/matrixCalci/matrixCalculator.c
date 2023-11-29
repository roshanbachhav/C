#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j, a[50][50],b[50][50],ch;
    int sum[50][50];
    int sub[50][50];
    int multi[50][50];
    int div[50][50];

    printf("Enter how many row you want \n");
    scanf("%d", &r);
    printf("Enter how many column you want \n");
    scanf("%d", &c);

    do
    {
        printf("\n");
        printf("1 : Addition of Matrix \n");
        printf("2 : Subtraction of Matrix \n");
        printf("3 : Multiplication of Matrix \n");
        printf("4 : division of Matrix \n");
        printf("5 : Exit \n");

        printf("please select only one choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter first matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("a::[%d][%d] \t", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("enter 2nd matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("b :: [%d][%d] \t", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("Printng matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("%d \t", sum[i][j]);
                }
            }
            break;
        case 2:
            

            printf("Enter first matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("a::[%d][%d] \t", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("enter 2nd matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("b :: [%d][%d] \t", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    sub[i][j] = a[i][j] - b[i][j];
                }
            }

            printf("Printng matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("%d \t", sub[i][j]);
                }
            }

            break;
        case 3:
            

            printf("Enter first matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("a::[%d][%d] \t", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("enter 2nd matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("b :: [%d][%d] \t", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    multi[i][j] = a[i][j] * b[i][j];
                }
            }

            printf("Printng matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("%d \t", multi[i][j]);
                }
            }

            break;
        case 4:
            
            printf("Enter first matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("a::[%d][%d] \t", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("enter 2nd matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("b :: [%d][%d] \t", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    div[i][j] = a[i][j] / b[i][j];
                }
            }

            printf("Printng matrix \n");

            for (i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("%d \t", div[i][j]);
                }
            }

            break;
        case 5:
            exit(0);

            break;

        default:

            break;
        }

    } while (ch != 5);

    return 0;
}
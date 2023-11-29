#include <stdio.h>
#define MAX 20

int ref[MAX], count[MAX], frame[MAX], mem[MAX][MAX], sp, m, n, fault;

void accept()
{

    int i;
    printf("Enter Number of Frames \n");
    scanf("%d", &n);
    printf("Enter Number of References \n");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &ref[i]);
    }
}
void disp()
{
    int i, j;

    for (i = 0; i < m; i++)
        printf("%3d", ref[i]);

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (mem[i][j])
                printf("%3d", mem[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", fault);
}

int search(int pno)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (frame[i] == pno)
        {
            return i;
        }
    }
    return -1;
}

int getlfu(int sp)
{
    int i, min, min_i = 9999;
    i = sp;
    do
    {
        if (count[i] < min)
        {
            min = count[i];
            min_i = i;
        }
        i = (i + 1) % n;
    } while (n != sp);

    return min_i;
}

void lfu()
{
    int i, j, k;

    for (i = 0; i < m && sp < n; i++)
    {
        k = search(ref[i]);
        if (k == -1)
        {
            frame[sp] = ref[i];
            count[sp]++;
            fault++;
            sp++;
            for (j = 0; j < n; j++)
                mem[j][i] = frame[i];
        }
        else
        {
            count[k]++;
        }
    }

    sp = 0;
    for (; i < m; i++)
    {
        k = search(ref[i]);
        if (k == -1)
        {
            sp = getlfu(sp);
            frame[sp] = ref[i];
            count[sp] = 1;
            fault++;
            sp = (sp + 1) % n;

            for (j = 0; j < n; j++)
                mem[j][i] = frame[i];
        }
        else
        {
            count[k]++;
        }
    }
}

void main()
{
    accept();
    lfu();
    disp();
}

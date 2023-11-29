#include <stdio.h>
#include<stdlib.h>
#define MAX 100


int main()
{
    int i, key, n, a[MAX];
    printf("Enter n element \n");
    scanf("%d", &n);
    printf("Enter element in arrays \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key value \n");
    scanf("%d",&key);

    sentinal_srch(a,n,key);
}
void sentinal_srch(int a[MAX], int n , int key){
  int i,last;
  last = a[n-1];
  a[n-1] = key;
  i=0;
  while(a[i]!=key)
  i++;
  a[n-1] = last;

  if (a[i] == key)
  {
    printf("Element are present  : %d",i+1);
  }
  else
  printf("Element not present \n");
  
}
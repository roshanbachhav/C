#include<stdio.h>
#include<string.h>

typedef struct city{
    char name[50];
    int code;
}record;

record city[200];

int read_file(record *a){

    int i=0;
    FILE *fp;
    if ((fp=fopen("cities.txt","r"))!=NULL)
    {
        while (!feof(fp))
        {
            fscanf(fp,"%s%d",a[i].name,&a[i].code);
            i++;
        }
    }
    return (i-1);

}

void l_search(record *a,int n,char x[20]){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (strcmp(a[i].name,x) == 0)
        {
            fprintf("\n %s = %d \n",a[i].name,a[i].code);
            break;
        }

    }
    if (i == n)
        fprintf("\n no data found \n");

}

main(){
    char x[20];
    int n;
    n = record_file(city);
    printf("Enter city name \n");
    gets(x);
    l_search(city,n,x);
}

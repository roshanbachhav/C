//Slips 1 q1

#include<stdio.h>
#define MAX 20

int ref[MAX],mem[MAX][MAX],faults,m,n,sp,frames[MAX],count[MAX];

void accept(){
    int i;

    
    printf("Enter Number of Frames \n");
    scanf("%d",&n);
    

    printf("Enter Number of refrence \n");
    scanf("%d",&m);
    

    printf("Enter Number of refrence String \n");
    for ( i = 0; i < m; i++)
    {
        printf("{ %d } = ",i);
        scanf("%d",&ref[i]);
    }   
}

void display(){
    int i,j;
    for(i=0;i<m;i++)
        printf("%3d",ref[i]);

    printf("\n\n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(mem[i][j])
            {
                printf("%3d \n",mem[i][j]);
            }
            else{
                printf(" ");
            }
        }
        
    }
    printf("Total fault pages %d",faults);    
}

int search(int pno){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(frames[i]==pno)
        {
            return i;
        }
    }
    return -1;
    
}


int getlfu(int sp)
{
    int i;
    int min , min_i=9999;
    i = sp;
    do{
        if(count[i] < min)
        {
            min = count[i];
            min_i = i;
        }
        i = (i + 1) % n;
    }while(i!=sp);

    return min_i;
}

void lfu(){
    int i,j,k;

    for(i=0;i<n && sp<m;i++)
    {
        k = search(ref[i]);
        if(k == -1)
        {
            frames[sp] = ref[i];
            count[sp]++;
            faults++;
            sp++;


            for(j=0;j<n;j++)
                
        }
    }
}
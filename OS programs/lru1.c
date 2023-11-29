#include<stdio.h>

int frame[55] , ref[55] , mem[55][55] , time[55] , sp , m , n , faults;

void accept(){
    int i;
    printf("Enter the frames \n");
    scanf("%d" , &n);
    printf("ENter the References \n");
    scanf("%d" , &m);
    printf("Enter the Elements in the references \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("< %d > ",i);
        scanf("%d",&ref[i]);
    }
}

void display(){
    int i,j;
    printf("Reference Data \n");
    for(i = 0; i < m ; i++)
    {
        printf("%d",ref[i]);
    }
    printf("\n\n");
    for(i = 0 ; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(mem[i][j])
            {
                printf("%d",mem[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n\n");
    }
    printf("Total Number of page Faults %d\n" , faults);
}

int search(int pno){
    int i;
    for(i = 0 ; i < n; i++){
        if(frame[i] == pno)
            return i;
    }
    return -1;
}


int getlru(){
    int i , min , min_i=9999;
    for(i=0;i<n;i++){
        if(time[i] < min)
        {
            min = time[i];
            min_i = i;
        }
    }
    return min_i;
}

void lru(){
    int i , j , k;
    for(i=0;i<m && sp < m;i++){
        k = search(ref[i]);
        if( k == -1 ){
            frame[sp] = ref[i];
            time[sp] = i;
            faults++;
            sp++;

            for(j=0;j<n;j++)
                mem[j][i] = frame[j];
        }else{
            time[k] = i;
        }
    }

    for(;i < m;i++){
        k = search(ref[i]);
        if(k == -1){
            sp = getlru();
            frame[sp] = ref[i];
            time[sp] = i;
            faults++;

            for(j=0;j<n;j++)
                mem[j][i] = frame[j];
        }
        else{
            time[k] = i;
        }
    }
}

int main(){
    accept();
    lru();
    display();
    return 0;
}
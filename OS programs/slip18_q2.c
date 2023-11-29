#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct node{
    char pname[20];
    int accessTime , burstTime , startTime , exitTime , tat , waitTime;
    struct node *next;
}node;

static int totalTAT = 0 , totalWT = 0;

struct node *head , *last;

void create(char pname[20], int at, int bt) {
    node *p;
    p = (node *)malloc(sizeof(node));
    strcpy(p->pname, pname);
    p->accessTime = at;
    p->burstTime = bt;
    p->next = NULL;

    if (head == NULL) {
        head = p;
    } else {
        last -> next = p;
    }

    last = p;
}

void sort(){
    int t;
    char name[20];
    node *p,*q;

    for(p = head; p !=NULL; p = p -> next){
        for(q = p -> next; q != NULL; q = q -> next){
            if(p -> accessTime > q -> accessTime){

                strcpy(name , p->pname);
                strcpy(p -> pname , q -> pname);
                strcpy(q -> pname , name);

                t = p -> accessTime;
                p -> accessTime = q -> accessTime;
                q -> accessTime = t;                

                t = p -> burstTime;
                p -> burstTime = q -> accessTime;
                q -> burstTime = t;

            }
        }
    }
}

void calc(){
    node *p,*q;
    for(p = head; p != NULL; p = p -> next){
        if(p == head){
            p -> startTime = p -> accessTime;
            p -> exitTime = p -> burstTime;
            // when find the tat value then exit time - access time; 
            p -> tat = p -> exitTime - p -> accessTime;
            // when find the tat value then tat (turn around time) - burst time; 
            p -> waitTime = p -> tat - p -> burstTime;
        }
        for(q = p -> next; q != NULL; q = q -> next){
            if(q -> accessTime > p -> exitTime){
                q -> startTime = q -> accessTime;
            }
            else{
                q -> startTime = p -> accessTime;
                q -> exitTime = q -> accessTime + q -> burstTime;
                q -> tat = q -> exitTime - q -> accessTime;
                q -> waitTime = q -> tat - q -> burstTime;
            }
            break;
        }
    }
}

void print(){
    node *p;
    printf("\n Pname \t accessTime \t burstTime \t startTime \t exitTime \t tat \t waitTime \n");
    for(p = head; p != NULL ; p = p -> next){
        printf("\n%s\t%d\t%d\t%d\t%d\t%d\t%d\n",p->pname , p->accessTime , p -> burstTime , p-> startTime , p-> exitTime , p->tat , p-> waitTime);
		totalTAT += p -> tat;
        totalWT += p -> waitTime;
    }
}

void printg(){
    node *current , *p = head , *q = head;
    int i;

    for(current = head; current -> next != NULL; current = current -> next){
        printf("ExitTime \n");
        printf("%d\n",p -> exitTime);

        for(i = 0; i < current -> exitTime; i++){
            if(i == p -> exitTime){
                printf("ExitTime \n");
                printf("%d",p -> exitTime);
                p = p -> next;
            }
        }

        printf("\n\n");
        printf("Pname \n");

        for ( i = 0; i < current -> exitTime; i++)
        {
            if (i == q -> exitTime)
            {
                printf("ExitTime \n");
                printf("%s \n", p -> pname);
                p = p -> next;
            }
            
        }
        printf("\n\n");
    }
}

void main(void){
    char pname[20];
    int at , bt , n;
    printf("Enter the size of data \n");
    scanf("%d",&n);
    printf("Enter \t Process Name \t Arrival Time \t burstTime \n");
    for(int i = 0;i < n; i++){
        scanf("%s%d%d",pname,&at,&bt);
        create(pname , at , bt);
    }
    sort();
    calc();
    print();
    printf("Your TAT (turn around time) is { %f } \n", (float) totalTAT / n);
    printf("Your WT (Waiting time) is { %f } \n", (float) totalWT / n);
    printg();
}
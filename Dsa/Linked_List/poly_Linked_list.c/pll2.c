#include<stdio.h>
#include<malloc.h>

struct node{
    int coe;
    int expo;
    struct node *next;
};

struct node *p1=NULL,*p2=NULL,*poly=NULL;

void create(struct node *nw)
{
    int i,n;
    printf("Enter [n] element \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter coefficent \n");
        scanf("%d",&nw->coe);
        printf("Enter exponent \n");
        scanf("%d",&nw -> expo);
        nw->next = (struct node *)malloc(sizeof(struct node));
        nw = nw -> next;
        nw -> next = NULL;
    }
    
}


void show(struct node *node){
    while (node -> next != NULL)
    {
        printf("%dx ^ %d ",node->coe,node->expo);
        node = node -> next;
        if(node->next!=NULL)
        printf("+");
    }
    
}

void polyadd(struct node *p1,struct node *p2,struct node *poly)
{
    while (p1 -> next && p2 -> next)
    {
        if (p1->expo > p2->expo)
        {
            poly -> expo = p1 -> expo;
            poly -> coe = p1 -> coe;
            p1 = p1 -> next;
        }
        else if(p1 -> expo < p2 -> expo)
        {
            poly -> expo = p2 -> expo;
            poly -> coe = p2 -> coe;
            p2 = p2 -> next;
        }
        else
        {
            poly -> expo = p1 -> expo;
            poly -> coe = p1 -> coe + p2 -> coe;
            p1=p1->next;
            p2=p2->next;
        }
        poly->next = (struct node *)malloc(sizeof(struct node));
        poly = poly -> next;
        poly -> next = NULL;
    }
    while (p1 -> next || p2 -> next)
    {
        if (p1 -> next)
        {
             poly -> expo = p1 -> expo;
            poly -> coe = p1 -> coe;
            p1 = p1 -> next;
        }
        if (p2->next)
        {
            poly -> expo = p2 -> expo;
            poly -> coe = p2 -> coe;
            p2 = p2 -> next;
        }
        poly->next = (struct node *)malloc(sizeof(struct node));
        poly = poly->next;
        poly->next = NULL;
    }
    
}

void main()
{
    p1 = (struct node *)malloc(sizeof(struct node));
    p2 = (struct node *)malloc(sizeof(struct node));
    poly = (struct node *)malloc(sizeof(struct node));

    printf("\n Enter first polynomial ");
    create(p1);
    printf("\n Enter second polynomial ");
    create(p2);
    printf("\n Enter number");
    show(p1);
    printf("\n Enter number");
    show(p2);
    polyadd(p1,p2,poly);
    printf("\nAdd value ");
    show(poly);
}
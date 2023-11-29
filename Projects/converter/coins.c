#include<stdio.h>
#include<stdlib.h>

int main () {
    int f=1;
    int op;
    float ans;
    printf("1.inr -> usd \t 2.usd -> inr \t 3.ind -> pkr \t 4.pkr -> ind \t 5.pkr -> usd \t 6.kwd -> usd \t 7.kwd -> inr \t 8.kwd -> pkr"); 
    printf("\n enter upper choice \n");
    scanf("%d",&op);
    if (op == 1)
    {
        printf("int -> usd \n");
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 0.01225;
        printf("the USD is %f",ans);
    }
    else if (op == 2)
    {
        printf("usd -> inr \n");
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 81.6309;
        printf("the USD is %f",ans);
    }
    else if (op == 3)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 2.75523;
        printf("the USD is %f",ans);
    }
    else if (op == 4)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 0.01225;
        printf("the USD is %f",ans);
    }
    else if (op == 5)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 0.36295;
        printf("the USD is %f",ans);
    }
    else if (op == 6)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 3.26;
        printf("the USD is %f",ans);
    }
    else if (op == 7)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 266.03;
        printf("the USD is %f",ans);
    }
    else if (op == 8)
    {
        printf("Enter currency digit \n");
        scanf("%d",&f);
        ans = f * 728.03;
        printf("the USD is %f",ans);
    }
    
    
return 0;
}
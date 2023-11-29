#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void coin_converter(){
    int ch;
    int inr=1,usd=1,kwd=1,pak=1;
    float conv;
    do
    {
    printf("\n\n-----------------Welcome To coin converter-----------------\n\n");
    printf("1.INR to USD \n");
    printf("2.USD to INR \n");
    printf("3.PKR to INR \n");
    printf("4.INR to PKR \n");
    printf("5.KWD to INR \n");
    printf("6.INR to KWD \n");
    printf("\n\n7.exit \n");


    printf("please select choice \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter indian currency \n");
        scanf("%d",&inr);
        conv = inr * 0.01225;
        printf("doller (USD) is %f",conv);
        break;
    case 2:
        printf("Enter doller (USD) currency \n");
        scanf("%d",&usd);
        conv = usd * 81.6309;
        printf("India ruppes (INR) is %f",conv);
        break;
    case 3:
        printf("Enter pakistan currency \n");
        scanf("%d",&pak);
        conv = pak * 0.36295;
        printf("India ruppes (INR) is %f",conv);
        break;
    case 4:
        printf("Enter indian currency \n");
        scanf("%d",&inr);
        conv = inr * 2.75523;
        printf("pakistan (PKR) is %f",conv);
        break;
    case 5:
        printf("Enter Kuwati dinnar currency \n");
        scanf("%d",&kwd);
        conv = kwd * 264.836;
        printf("indian (INR) is %f",conv);
        break;
    case 6:
        printf("Enter indian currency \n");
        scanf("%d",&inr);
        conv = inr * 0.00378;
        printf("kuwati dinnar (KWD) is %f",conv);
        break;
    }    
    } while (ch!=7);
}



void time_converter(){
int ch;
int ms=1,sec=1,min=1,hr=1;
float ans;
    do
    {    
        printf("\n------------------SECOND----------------------\n");
    printf("1. convert second TO millisecond \n");
    printf("2. convert second TO minute \n");
    printf("3. convert second TO hours \n");
        printf("\n------------------MINUTE----------------------\n");
    printf("4. convert minute TO millisecond \n");
    printf("5. convert minute TO second \n");
    printf("6. convert minute TO hours \n");
        printf("\n------------------HOUR----------------------\n");
    printf("7. convert hour TO millisecond \n");
    printf("8. convert hour TO second \n");
    printf("9. convert hour TO minute \n");
    printf("\n\n 10.exit");
    printf("\n select choice \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("please enter second for convert in millisecond \n");
        scanf("%d",&sec);
        ans = sec * 1000;
        printf("time is %f",ans);
        break;
    case 2:
        printf("please enter second for convert in minute \n");
        scanf("%d",&sec);
        ans = sec * 0.0166667;
        printf("time is %f",ans);
        break;
    case 3:
        printf("please enter second for convert in hours \n");
        scanf("%d",&sec);
        ans = sec * 0.00027777833333;
        printf("time is %f",ans);
        break;
    case 4:
        printf("please enter minute for convert in millisecond \n");
        scanf("%d",&min);
        ans = min * 60000;
        printf("time is %f",ans);
        break;
    case 5:
        printf("please enter minute for convert in second \n");
        scanf("%d",&min);
        ans = min * 60;
        printf("time is %f",ans);
        break;
    case 6:
        printf("please enter minute for convert in hour \n");
        scanf("%d",&min);
        ans = min * 0.0166667;
        printf("time is %f",ans);
        break;
    case 7:
        printf("please enter hour for convert in millisecond \n");
        scanf("%d",&hr);
        ans = hr * 3600007.2;
        printf("time is %f",ans);
        break;
    case 8:
        printf("please enter hour for convert in second \n");
        scanf("%d",&hr);
        ans = hr * 3600.0072;
        printf("time is %f",ans);
        break;
    case 9:
        printf("please enter hour for convert in minute \n");
        scanf("%d",&hr);
        ans = hr * 60;
        printf("time is %f",ans);
        break;
    case 10: printf("\n----------------Exit------------- \n");
        break;
    
    default:
    printf("wrong input \n");
        break;
    }
    } while (ch!=10);
    
}
void date_converter(){
    int ch,day=1,week=1,month=1,year=1;
    float ans;
    do
    {    
        printf("\n--------------------day--------------------\n");
    printf("1. convert day TO week \n");
    printf("2. convert day TO month \n");
    printf("3. convert day TO year\n");
        printf("\n----------------------week------------------\n");
    printf("4. convert week TO day \n");
    printf("5. convert week TO month \n");
    printf("6. convert week TO year \n");
        printf("\n---------------------month-------------------\n");
    printf("7. convert month TO day \n");
    printf("8. convert month TO week \n");
    printf("9. convert month TO year \n");
        printf("\n------------------year----------------------\n");
    printf("10. convert year TO day \n");
    printf("11. convert year TO week \n");
    printf("12. convert year TO month \n");
    printf("\n\n 13.exit");
    printf("\n select choice \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("please enter day for convert in week \n");
        scanf("%d",&day);
        ans = day * 0.142857;
        printf("time is %f",ans);
        break;
    case 2:
        printf("please enter day for convert in month \n");
        scanf("%d",&day);
        ans = day * 0.0328767;
        printf("time is %f",ans);
        break;
    case 3:
        printf("please enter day for convert in year \n");
        scanf("%d",&day);
        ans = day * 0.00273973;
        printf("time is %f",ans);
        break;
    case 4:
        printf("please enter week for convert in day \n");
        scanf("%d",&week);
        ans = week * 7;
        printf("time is %f",ans);
        break;
    case 5:
        printf("please enter week for convert in month \n");
        scanf("%d",&week);
        ans = week * 0.230137;
        printf("time is %f",ans);
        break;
    case 6:
        printf("please enter week for convert in year \n");
        scanf("%d",&week);
        ans = week * 0.019178104350137;
        printf("time is %f",ans);
        break;
    case 7:
        printf("please enter month for convert in day \n");
        scanf("%d",&month);
        ans = month * 30.4167;
        printf("time is %f",ans);
        break;
    case 8:
        printf("please enter month for convert in week \n");
        scanf("%d",&month);
        ans = month * 4.34524;
        printf("time is %f",ans);
        break;
    case 9:
        printf("please enter month for convert in year \n");
        scanf("%d",&month);
        ans = month * 0.0833334;
        printf("time is %f",ans);
        break;
    case 10:
        printf("please enter year for convert in day \n");
        scanf("%d",&year);
        ans = year * 365;
        printf("time is %f",ans);
        break;
    case 11:
        printf("please enter year for convert in week \n");
        scanf("%d",&year);
        ans = year * 52.1429;
        printf("time is %f",ans);
        break;
    case 12:
        printf("please enter year for convert in month \n");
        scanf("%d",&year);
        ans = year * 12;
        printf("time is %f",ans);
        break;
    case 13: printf("\n----------------Exit------------- \n");
        break;
    
    default:
    printf("wrong input \n");
        break;
    }

    }while(ch!=13);
}
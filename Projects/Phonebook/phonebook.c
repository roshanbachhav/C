#include<stdio.h>
void add();
void list();
void modified();
void search();
void delete();

int main () {
    int ch;

    printf("\n ---------------------------Welcome to Phonebok-------------------------- \n");

    printf("1 : Add new \n");
    printf("2 : List \n");
    printf("3 :  Modified\n");
    printf("4 :  search\n");
    printf("5 :  Delete\n");
    printf("6 :  Exit\n");

    printf("\n");

    printf("select valid choice \n");

    switch (ch)
    {
    case 1:
        add();
        break;
    case 2:
        list();
        break;
    case 3:
        modified();
        break;
    case 4:
        search();
        break;
    case 5:
        delete();
        break;
    case 6:
        exit(0);
        break;
    
    default:
    printf("Enter valid input! for gatting valid output \n");
        break;
    }
return 0;
}

void add(){
    char fullname,no,add,gr,email;
    printf("Please enter Name: ");
    scanf("%s")
}
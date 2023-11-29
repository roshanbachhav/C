#include<stdio.h>
void fun1(int arr[] ,int length){
    int sum=0;
    int product=1;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < length; i++){
        product *=arr[i];
    }
}

int main () {
    int arra[]={1,2,3,4,5};
    fun1(arra,5);
return 0;
}
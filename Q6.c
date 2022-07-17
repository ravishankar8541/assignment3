//Write a program to print greater between two numbers. Print one number of both are
//the same.
#include"stdio.h"
int main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater than b ");
    }else{
        printf("b is greater than a ");
    }
}

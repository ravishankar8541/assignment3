//5. Write a program to check whether a given number is positive, negative or zero.
#include"stdio.h"
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }else if(n==0){
        printf("zero");
    }else if(n<0){
        printf("negative");
    }
    return 0;
}
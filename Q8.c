//Write a program to check whether a given year is a leap year or not.
#include"stdio.h"
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0){
            printf("leap year");
        }else{
            printf("not leap year");
        }
    }
    else{
        if(year%4==0){
            printf("leap year");
        }else{
            printf("not leap year ");
        }
    }
    
    return 0;
}
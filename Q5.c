//Write a program to check whether a given number is a three-digit number or not.
#include"stdio.h"
int main()
{
    int n,count=0;
    int d1,d2,d3;
    printf("Enter three-digit number :");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;  
    }
    if(count==3){
       printf("it is three digit number "); 
    }else{
        printf("it is not three-digit number ");
    }
    return 0;
}



/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include"stdio.h"
int main()
{
    int n=8;
    if(n & 1==1)
    printf("odd number ");
    else
    printf("even number");
    return 0;
}
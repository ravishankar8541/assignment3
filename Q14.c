 //Write a program to check whether a given number is divisible by 7 or divisible by 3.
 #include"stdio.h"
 int main()
 {
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
    {
        printf("Divisible ");
    }else{
        printf("Not Divisible ");
    }
    return 0;
 }

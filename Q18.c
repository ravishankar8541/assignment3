/*Write a program which takes the month number as an input and display number of
days in that month*/
#include"stdio.h"
int main()
{
    int Month_Number;
    printf("Enter Month Number :");
    scanf("%d",&Month_Number);
    if(Month_Number==1 ||Month_Number==3||Month_Number==5||Month_Number==7||Month_Number==8||Month_Number==10||Month_Number==12){
        printf("There are 31 days in this month ");
    }
    else if(Month_Number==2)
    {
        printf("Ther are 28 or 29 days in this month");
    }
    else
    printf("There are 30 days in this month ");
    printf("\n");
    return 0;
}
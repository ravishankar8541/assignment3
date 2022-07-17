/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include"stdio.h"
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
        printf("a is greater ");
    }
        else{
            printf("c is greater ");
        }
}
        else{
            if(b>c){
                printf("b is greater ");
            }else{
                printf("c is greater ");
            }
        }
        
        
    return 0;

}

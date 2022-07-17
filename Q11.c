/* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include"stdio.h"
int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter Subject-1 mark :");
    scanf("%d",&s1);
    printf("Enter Subject-2 mark :");
    scanf("%d",&s2);
    printf("Enter Subject-3 mark :");
    scanf("%d",&s3);
    printf("Enter Subject-4 mark :");
    scanf("%d",&s4);
    printf("Enter Subject-5 mark :");
    scanf("%d",&s5);
    if(s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33){
        printf("\npassed ");
    }
        else{
        printf("\nfailed");
        }
  return 0;  
}
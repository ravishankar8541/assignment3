//. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include"stdio.h"
int main()
{
    char alpha;
    printf("Enter a character :");
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z')
        printf("lowercase");
    else 
        printf("uppercase");
    
    printf("\n");
    return 0;
}

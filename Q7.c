/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include"stdio.h"
#include"math.h"
int main()
{
     int a,b,c,D;
     float x,y;
     printf("Enter the value of a,b and c  :");
     scanf("%d %d %d",&a,&b,&c);
     D=b*b-4*a*c;
     if(D<0){
        printf("Imaginary");
     }     
     else if(D==0)  {
      printf("equal");
      c=(-b/2.0*a);
      printf("Root is %f ",x);
     } 
     else if(D>0)   
     {
      printf("Real and distinct");
      x=(-b+sqrt(D))/(2*a);
      y=(-b-sqrt(D))/(2*a);
      printf("\nRoots are =%f,%f",x,y);
     }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    return 0;
}

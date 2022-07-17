//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include"stdio.h"
int main()
{
int cost_price,selling_price;
float profit,loss;
printf("Enter the cost price of a product :");
scanf("%d",&cost_price);
printf("Enter the selling price of a product :");
scanf("%d",&selling_price);
profit=((selling_price-cost_price)*100)/cost_price;
loss=((cost_price-selling_price)*100)/cost_price;
if(selling_price>cost_price){
printf("pofit =%f",profit);
}else{
printf("loss =%f",loss);
}
return 0;
}
/*Write a C program to input cost price and selling price of a product and check profit or loss. 
Also calculate total profit or loss using if else. How to calculate profit or loss on any 
product using if else in C programming. 
Program to calculate profit and loss of any product in C.*/
#include <stdio.h>

int main()
{
   int cost, sell, total;
   printf("Enter the cost price: ");
   scanf("%d", &cost);
   
   printf("Enter the sell price: ");
   scanf("%d", &sell);
   
   if(cost < sell){
       total = sell - cost;
       printf("profits are: %d", total);
   }
   else
      total = cost - sell;
      printf("loss are: %d", total);
      
    return 0;
}

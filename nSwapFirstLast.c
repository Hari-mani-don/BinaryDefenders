/* Write a C program to input a number from user and swap first and last digit of the given number.
How to swap first and last digits of a number in C programming.
Logic to swap first and last digit of a number in C program.*/


#include<stdio.h>
#include<math.h>

int main(){
    int n,  last, digit, sum, s, h;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    last = n%10;
    n=n/10;
    int first=n;
    for(;first!=0;){
       h  = first%10;
        first = first/10;
    }
    
    digit =(int) log10(n);
    sum= pow(10, digit);
    s=n%sum;
    
    
    printf("Before swap: %d \n", n);
    printf("Swapint values are : %d%d%d" ,last, s, h);
    
   return 0;
   
}

/*  Write a C program to input a number from user and swap first and last digit of the given number. 
How to swap first and last digits of a number in C programming. 
Logic to swap first and last digit of a number in C program.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, first, last, digit, swap;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    last =n%10; //12345 -> 5
    digit =  (int)log10(n); //4
    int temp = n;
    for(;temp>=10;){
        temp/=10;
    }
    first =temp;
    
    swap=(last * pow(10, digit)+ first)  + (n - (first * pow(10, digit)+ last));
    printf("Swapt number: %d", swap);
    return 0;
}

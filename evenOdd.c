/* Write a C program to check whether a number is even or odd using if else. 
How to check whether a number is even or odd using if else in C program. 
C Program to input a number from user and check whether the given number
is even or odd. Logic to check even and odd number using if...else in C programming.*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to check 'even or odd':");
    scanf("%d", &num);
    
    if(num%2==0)
        printf("Even number");
    else
       printf("Odd number");
    return 0;   
}

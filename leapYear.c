/* Write a C program to check leap year using if else. How to check whether
a given year is leap year or not in C programming. C Program to input year 
from user and check whether the given year is leap year or not using ladder if else. 
Logic to check leap year in C programming. */


#include<stdio.h>
int main(){
    /* declar variable */
    int year; 
    
    /* input get from user */
    printf("Enter the year to check leap year or not :");
    scanf("%d", &year);
    
    /* year to check leap or not */
    if((year %4==0) && (year%100!=0))
    {
        /* year divisible by 4 and 400 */
        printf("The given number is leap year");
    }
    else if (year %400 == 0)
    {
        printf("The given number is leap year");
    }
    else
    {
       printf("The given number is not leap year");
    }
    return 0;
}

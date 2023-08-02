/* Write a C program to input a number from user and find first and last digit of number using loop.*/


#include<stdio.h>
int main(){
    int n, first, last;
    
    printf("Enter the inputnumber: ");
    scanf("%d", &n);
    last= n%10;
    
    while(n!='\0'){
        first = n%10;
        n=n/10;
    }
    printf("First : %d\nLast  : %d", first , last);
}

/* Write a C program to input a number from user and calculate product of its digits.
How to find product of digits of a number using loop in C programming.
Logic to find product of digits of a given number in C program.
*/

#include<stdio.h>
int main(){
    int n, sum=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while(n!=0){
        sum*=n%10;
        n/=10;
    }
    printf("Product of digits: %d", sum);
    return 0;
}

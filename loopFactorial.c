/* Write a C program to input a number and calculate its factorial using for loop.
How to find factorial of a number in C program using loop.
Logic to find factorial of a number in C programming.
*/

#include<stdio.h>
int main(){
    long long n, fact=1;
    printf("Enter the number: ");
    scanf("%lld", &n);
    for(int i=n; i>1;i--){
        fact*=i;
    }
    printf("Factorial of: %lld = %lld", n, fact);
   return 0;     
}

/* Write a C program to input a number and calculate sum of digits using for loop. 
How to find sum of digits of a number in C program.
Logic to find sum of digits of a given number in C programming.
*/

#include<stdio.h>
int main(){
    int n, sum, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(;n!=0;){
        a=n%10;
        n/=10;
        sum +=a;
    }
    printf("Sum of:%d", sum);
    return 0;
}

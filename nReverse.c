/* Write a C program to input a number from user and find reverse of the given number using for loop.
How to find reverse of any number using loop in C program.
Logic to find reverse of a number in C programming.
*/

#include<stdio.h>
int main(){
    int n, last, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while(n!=0){
        last = n%10;
        n=n/10;
        sum=sum*10 +last;
    }
    printf("Reverse :%d", sum);
    return 0;
    
}

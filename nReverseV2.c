/* Write a C program to input a number from user and find reverse of the given number using for loop.
How to find reverse of any number using loop in C program.
Logic to find reverse of a number in C programming.
*/


#include<stdio.h>
#include<math.h>
int main(){
    int n, temp, last, digit, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    digit=(int) log10(n);
    while(digit+1>=1){
        last=n%10;
        temp=last * (int)pow(10, digit);
        sum+=temp;
        n=n/10;
        digit--;
    }
    
    printf("Reverse: %d", sum);
}

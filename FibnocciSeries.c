/*Write a C program to print Fibonacci series up to n terms using loop. How to generate Fibonacci series up to n 
terms using loops in C programming. Logic to print Fibonacci series in a given range in C programming.*/

#include<stdio.h>
int main(){
    int n, c=0, a=0, b=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d\n", c);
        a=b;
        b=c;
        c=a+b;
        
    }
    return 0;
}

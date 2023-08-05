/* Write a C program to input a number from user and find reverse of the given number using for loop. 
How to find reverse of any number using loop in C program. Logic to find reverse of a number in
C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int n, reverse, sum=0, length;
    printf("Enter the number: ");
    scanf("%d", &n);
    length=(int)log10(n);
    for(int i=0;i<5;i++){
        reverse=n%10;
        sum=(sum*10)+reverse;
        n/=10;
        
    }
    printf("reverse of: %d", sum);
    return 0;
}

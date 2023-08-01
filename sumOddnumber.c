/*Write a C program to find sum of all odd numbers from 1 to n using for loop. 
How to find sum of all odd numbers in a given range in C programming. Logic to find sum of odd 
numbers in a given range using loop in C programming.
*/

#include<stdio.h>
int main(){
    int start, end, sum;
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);
    
    for(int i=start;i<=end;i=i+2){
       sum=sum+i;
    }
    printf("%d", sum);
}

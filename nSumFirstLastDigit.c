/* Write a C program to input a number
and find sum of first and last digit of the number using for loop. 
*/

#include<stdio.h>
int main(){
    int n, first, last, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    last = n%10;
    for(; n!=0;){
        first=n%10;
        n=n/10;
    }
    
    sum=first + last;
    printf("sum of first and last: %d ", sum);
    
  return 0;    
    
}

/* Write a C program to find power of a number using for loop. How to find power of a number 
without using built in library functions in C program. 
Logic to find power of any number without using pow() function in C programming.
*/

#include<stdio.h>
int main(){
    int result=1, base, expo;
    printf("Enter the bae value: ");
    scanf("%d", &base);
    printf("Enter the expo value: ");
    scanf("%d", &expo);
    
    for(int i=0;i<expo;i++){
        result*=base;
    }
    printf("The power of %d = %d", base, result);
  return 0;    
}

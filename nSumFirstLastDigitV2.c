/*How to find sum of first and last digit of a number in C programming using loop. 
Logic to find sum of first and last digit of a number without using loop in C program.
*/


#include<stdio.h>
#include<math.h>

int main(){
    int n, first, last, sum=0, digit;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    last = n%10;
    digit=(int) log10(n);
    first=(int) n / pow(10, digit);
    
    sum = first + last;
    printf("Sum of first and last: %d", sum);
    
   return 0;
   
}
        

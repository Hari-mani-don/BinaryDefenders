/* How to find first and last digit of a number in C programming.
Logic to find first and last digit of a given number without using loop in C program.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, first, last, digit;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    last = n%10;
    digit = (int) log10(n);
    
   first = (int) n/pow(10, digit);
    printf("First: %d\nLast: %d", first , last);
    
    return 0;
    
}

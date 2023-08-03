/* Write a C program to input a number from user and swap first and last digit of the given number.
How to swap first and last digits of a number in C programming.
Logic to swap first and last digit of a number in C program.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, first, last, digit, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
      
      //12345
    last=n%10;  //5
    digit=log10(n); //12345 -> 4
    
    first=n/pow(10, digit); // 1
    sum=last * pow(10, digit) + n % (int)pow(10, digit); //52345
    sum=sum -last;
    sum = sum + first;
    printf("Swap values are:%d ", sum);
    
    return 0;
    
}

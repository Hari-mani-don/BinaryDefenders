/* Write a C program to input Octal number from user and convert to Decimal number system. How to convert from Octal number
system to Decimal number system in C program. Logic to convert octal to decimal number system in C programming.

Example
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, temp, temp2, length=0, sum=0, sum2=0, sum3=0;
    printf("Input octol number: ");
    scanf("%d", &n);
    temp=n;
    temp2=temp%10;
    length=(int)log10(n);
    for(int i=0;i<=length;i++){
        sum=temp2 * pow(8, i);
        sum2=sum + sum2;
        temp/=10;
        temp2=temp%10;
        
    }
   
    printf("%d", sum2);
   
    return 0;
}

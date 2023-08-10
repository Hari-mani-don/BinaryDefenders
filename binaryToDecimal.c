/* Write a C program to input binary number from user and convert binary number to decimal number system. How to convert from binary number system to
decimal number system in C programming. Logic to convert binary to decimal number system in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, temp, temp2, length=0, sum2=0, sum;
    printf("Input binary number: ");
    scanf("%d", &n);
    temp=n;
    length=(int)log10(n);
    temp2=temp%10;
    for(int i=0;i<=length;i++){
        sum=temp2 * pow(2, i);
        sum2=sum+sum2;
        temp/=10;
        temp2=temp%10;
    }
    printf("binary to decimal: %d", sum2);
    return 0;
}

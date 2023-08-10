/* Write a C program to input decimal number from user and convert to octal number system. How to convert from decimal number system 
to octal number system in C programming. Logic to convert decimal to octal number system in C programming.
*/

#include<stdio.h>
#define BASE 4
int main(){
    int n, length, sum=0;
    
    printf("Input Decimal number: ");
    scanf("%d", &n);
    int temp=n;
    int temp2;
    
    while(temp>=8){
        temp/=8;
        length++;
    }
    int a[length];
   int i=length-1;
    while(n>=8){
        temp2=n%8;
        n/=8;
        a[i]=temp2;
        i--;
    }
    
    printf("%d", n);
    for(int j=0;j<length;j++){
        printf("%d", a[j]);
    }
    return 0;
}

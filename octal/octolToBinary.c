/* Write a C program to input decimal number from user and convert to binary number system. How to convert from decimal number
to binary number system in C program. Logic to convert decimal to binary number system in C programming.
*/

#include<stdio.h>
#define BASE 4
int main(){
    int n, temp,length=0, temp2, i=BASE-1, sum=0, a[BASE];
    printf("Input Decimal number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>=2){
        temp/=2;
        length++;
    }
   
    while(n>=2){
        temp2=n%2;
        n/=2;
        a[i]=temp2;
        i--;
    }
    sum=BASE-length-1;
    a[sum]=n;
    
    for(int j=0;j<BASE;j++){
        printf("%d", a[j]);
    }
    return 0;
}

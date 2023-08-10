/* Write a C program to input Octal number from user and convert to Binary number system. How to convert from Octal number system to Binary number system in C.
Logic to convert octal to binary number system in C programming.
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
    length=0;
    sum3=sum2;
    while(sum3>=2){
        sum3/=2;
        length++;
    }
    int a[length], j=length-1, result=0;
    while(sum2>=2){
        result=sum2%2;
        sum2/=2;
        a[j]=result;
        j--;
    }
    printf("%d", sum2);
    for(int i=0;i<length;i++){
        printf("%d", a[i]);
    }
    return 0;
}

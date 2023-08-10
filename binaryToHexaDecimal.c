/* Write a C program to input binary number from user and convert to hexadecimal number system. 
How to convert binary to hexadecimal number system in C program. Logic to convert binary to hexadecimal 
number system in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, temp, temp2, length=0, sum3, sum, sum2;
    printf("Enter the number; ");
    scanf("%d", &n);
    temp=n;
    temp2=temp%10;
    length=(int)log10(n);
    for(int i=0;i<=length;i++){
        sum=temp2 * pow(2, i);
        sum2=sum+sum2;
        temp/=10;
        temp2=temp%10;
    }
    length=0;
    sum3=sum2;
    while(sum3>=16){
        sum3/=16;
        length++;
    }
    int a[length], result=0, j=length-1;
    while(sum2>=16){
        result=sum2%16;
        sum2/=16;
        a[j]=result;
        j--;
    }
    if(sum2>=10 && sum2<=15){
        switch(sum2){
            case 10:
              printf("A");
              break;
              case 11:
              printf("B");
              break;
              case 12:
              printf("C");
              break;
              case 13:
              printf("D");
              break;
              case 14:
              printf("E");
              break;
              case 15:
              printf("F");
              break;
        }
    }
    for(int k=0;k<length;k++){
        printf("%d", a[k]);
    }
    return 0;
}

/* Write a C program to input binary number from user and convert to octal number system. How to convert from binary number
system to octal number system in C. Logic to convert binary to octal number system in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int n,length, sum=0, sum2=0, sum3;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp=n;
    int temp2=temp%10;
    length=(int)log10(n);
    for(int i=0;i<=length;i++){
        sum=temp2 * pow(2, i);
        sum2=sum+sum2;
        temp/=10;
        temp2=temp%10;
    }
    int length1=0;
    sum3=sum2;
    while(sum3>=8){
        sum3/=8;
        length1++;
    }
    
   
    int j=length1-1;
     int a[length1];
     int result;
    
    while(sum2>=8){
       result=sum2%8;
        sum2/=8;
        a[j]=result;
        j--;
    }
    
    printf("%d", sum2);
    
    for(int k=0;k<length1;k++){
        printf("%d ", a[k]);
    }
    return 0;
}

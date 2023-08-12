/* Write a C program to input hexadecimal number from user and convert it to Decimal number system. How to convert from Hexadecimal number system 
to Decimal number system in C programming. Logic to convert hexadecimal to decimal number system in C programming.
*/

#include<stdio.h>
#include<math.h>
#define BASE 16
int main(){
    int a[BASE]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n, sum=0, sum2=0, temp, temp2, length=0, h;
    printf("how many values do you want to print:");
    scanf("%d", &n);
    int b[n];
    char hex[8];
    printf("Enter the hexa Values: ");
    for(int i=0;i<n;i++){
        scanf(" %c", &hex[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<BASE;k++){
            if(hex[j]==a[k]){
                b[j]=k;
                break;
            }
        }
    }
    int p=n-1;
    for(int l=0;l<n;l++){
        sum=b[p] * pow(16, l);
        sum2=sum +sum2;
        p--;
    }
    
    printf("%d", sum2);
   
    return 0;
}


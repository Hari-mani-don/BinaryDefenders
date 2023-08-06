/* Write a C program input two numbers from user and find the HCF using for loop. How to find GCD of two given 
numbers using loops in C programming.
Logic to find HCF of two number in C programming.
*/

#include<stdio.h>
int main(){
    int num1, num2, x=0, y=0, lenA, lenB, lenC, sum, z;
    
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    int a[num1];
    int b[num2];
    int c[sum];
    
    printf("Common factor %d: ", num1);
    for(int i=1;i<=num1;i++){
        if(num1 % i == 0){
            a[x]=i;
            printf("%d ", a[x]);
             x++;
        }
        
    }
    printf("\nCommon factor %d: ", num2);
    for(int j=1;j<=num2;j++){
        if(num2 % j == 0){
            b[y]=j;
            printf("%d ", b[y]);
            y++;
        }
    }
   
     
    if(x<y){
        sum=x;
    }
    else{
        sum=y;
    }
    printf("\nsum : %d", sum);
   
    
    x=0;
    printf("\nC is : ");
    for(int i=0;i<sum;i++){
        if(a[i]==b[i]){
            c[x]=a[i];
            printf("%d ", c[x]);
            x++;
            z=x;
        }
    }
    
   
    printf("\nLenC : %d", z);
    printf("\nThe Hightest Common factor values of %d and %d = %d : ", num1, num2, c[z-1]);
    
   return 0;    
}

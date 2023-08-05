/* Write a C program to input number from user and check number is palindrome or not using loop. 
How to check whether a number is palindrome or not using loop in C programming.
Logic to check palindrome number in C programming.
*/


#include<stdio.h>
#include<math.h>

int main(){
    int n, reverse, length, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    length=(int)log10(n);
    int temp=n;
    for(int i=0;i<length+1;i++){
        sum=(sum * 10) + temp %10;
        temp/=10;
    }
    if(n==sum){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
    
   return 0;
}

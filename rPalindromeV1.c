//recursion using palindrome check Version v1

#include<stdio.h>
int palindrome(int n);
int sum=0;
int main(){
    int n;
    printf("input any number: ");
    scanf("%d", &n);
    
    int pal=palindrome(n);
    if(n==pal){
        printf("%d is palindrome", n);
    }
    else{
        printf("%d is not palindrome", n);
    }
    return 0;
}
int palindrome(int n){
    if(n==0){
        
        return sum;
    }
    int temp=n%10;
    sum=(sum*10) + temp;
    palindrome(n/=10);
}

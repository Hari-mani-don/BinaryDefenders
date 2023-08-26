//recursion using palindrome check Version v2

#include<stdio.h>
#include<math.h>
int palindrome(int n);
int reverse(int n);
int sum=0;
int main(){
    int n;
    printf("input any number: ");
    scanf("%d", &n);
    
   
    if(palindrome(n)==1){
        printf("%d is palindrome", n);
    }
    else{
        printf("%d is not palindrome", n);
    }
    return 0;
}
int palindrome(int n){
   
     if(n==reverse(n)){
        
        return 1;
    }
    else
    {
         return 0;
    }
    
}
int reverse(int n){
    int digit=(int) log10(n);
    if(n==0){
        return 0;
    }
    return ((n%10 * pow(10,digit)) + reverse(n/10));
}



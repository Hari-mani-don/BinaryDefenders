//recursion using Factorial Version V1

#include<stdio.h>
unsigned long long isFactorial(int n);

int main(){
    int n;
    printf("input any number: ");
    scanf("%d", &n);
    
    unsigned long long fact=isFactorial(n);
    printf("sum: %llu", fact);
  return 0;    
}

unsigned long long isFactorial(int n){
    if(n==1){
        return 1;
    }
    return (n * isFactorial(n-1));
}

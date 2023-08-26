//recursion using calculate sum of Digit Version V1

#include<stdio.h>
int calculateDigit(int n);
int sum=0;
int main(){
    int n;
    printf("input any number: ");
    scanf("%d", &n);
    
    int cal=calculateDigit(n);
    printf("sum: %d", cal);
  return 0;    
}

int calculateDigit(int n){
    if(n==0){
        return 0;
    }
    return ((n%10 + sum )+ calculateDigit(n/10));
}

//function using check wether number is even or Odd version V2

#include<stdio.h>
int evenOdd(int n);
int isEven(int num){
    return !(num & 1);
}
int main(){
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    
    evenOdd(num);
   return 0;
}
int evenOdd(int n){
    if(isEven(n)){
        printf("%d is even", n);
    }
    else{
        printf("%d is Odd", n);
    }
}

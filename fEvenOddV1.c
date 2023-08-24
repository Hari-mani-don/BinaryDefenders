//function using check wether number is even or Odd version V1

#include<stdio.h>
int evenOdd(int n);
int main(){
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    
    evenOdd(num);
   return 0;
}
int evenOdd(int n){
    if(n%2==0){
        printf("%d is even", n);
    }
    else{
        printf("%d is Odd", n);
    }
}

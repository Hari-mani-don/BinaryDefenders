//swap tow number
#include<stdio.h>
#define SWAP(a, b) a=a*b, b=a/b, a=a/b

int main(){
    int a=10;
    int b=20;
    
    printf("Before swap a= %d\n",a);
    printf("Befor swap b= %d\n",b);
    
    SWAP(a, b);
    printf("\nAfter swap a= %d\n", a);
    printf("After swap b= %d\n", b);
    
    return 0;
}

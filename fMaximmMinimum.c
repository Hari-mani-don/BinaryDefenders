//function unsing find Maximum and Minimum v1

#include<stdio.h>
int Maximum(int a, int b);
int Minimum(int a, int b);
int main(){
    int num, num2;
    printf("Input 2 numbers: ");
    scanf("%d %d", &num, &num2);
    
    printf("Maximum : %d\n", Maximum(num, num2));
    printf("Minimum : %d\n", Minimum(num, num2));
    
   return 0;
}

int Maximum(int a, int b){
    return a>b?a:b;
}
int Minimum(int a, int b){
    return a<b?a:b;
}

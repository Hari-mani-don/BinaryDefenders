#include<stdio.h>
int main(){
    int num1, num2, result, a;
    printf("Enter the num1 and num2:");
    scanf("%d %d", &num1, &num2);
    a=num1>num2;
    switch(a){
        case 1:
            result= num1;
             break;
        case 0:
             result=num2;
             break;
        default:
             printf("invalid input");

    } 
    printf("Greater than numer is : %d", result);     
    
    return 0;
    
}

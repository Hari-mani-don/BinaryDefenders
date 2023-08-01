#include<stdio.h>
int main(){
    int num, a;
    printf("Enter the number to check ever or odd: ");
    scanf("%d", &num);
    a=(num%2)==0;
    switch(a){
        case 0:
           printf("odd number");
           break;
        case 1:
           printf("Even number");
           break;
        default:
           printf("Error ! invalid input");
           break;
    }
    
    return 0;
    
}
    
    

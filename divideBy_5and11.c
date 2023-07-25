#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check divisible/non-divisible: ");
    scanf("%d", &num);
    
    if((num%5==0) && (num%11==0)){
       printf("Number is divisible by 5 and 11");
    } 
    else{
       printf("Number is not divisible");
       }
   
       
    return 0;
}

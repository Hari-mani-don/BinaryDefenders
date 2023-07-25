#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check divisible/non-divisible: ");
    scanf("%d", &num);
    
    if(num %2 ==0)
       printf("%d is  a divisible", num);
    else
       printf("%d is not divisible", num);
       
    return 0;
}

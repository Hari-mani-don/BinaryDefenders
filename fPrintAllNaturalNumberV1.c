//recursion use to print all Natural Number version V1

#include<stdio.h>
int printNaturalNumber(int lower, int upper);
int main(){
    int lower, upper;
    printf("input lower limit: ");
    scanf("%d", &lower);
    printf("input upper limit:");
    scanf("%d", &upper);
    printf("Natural Number: ");
   printNaturalNumber( lower, upper);
  return 0;    
}


int printNaturalNumber(int lower, int upper){
    if(lower>upper){
        return 0;
    }
   printf("%d ", lower);
   printNaturalNumber(lower+1, upper);
}

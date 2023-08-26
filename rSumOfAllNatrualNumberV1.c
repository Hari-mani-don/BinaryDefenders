//sum of all Natural numbers Recursion version V1

#include<stdio.h>
 int sumOfAllNaturalNumber(int lower, int upper);
 int sum=0;
int main(){
    int lower, upper;
    printf("input lower: ");
    scanf("%d", &lower);
    printf("input upper: ");
    scanf("%d", &upper);
      sumOfAllNaturalNumber(lower, upper);
    
  
    
 return 0;    
}

 int sumOfAllNaturalNumber(int lower, int upper){
     
    if(lower>upper){
        printf("sum: %d", sum);
        return 0;
    }
    sum+=lower;
    sumOfAllNaturalNumber(lower+1, upper);
    
 }


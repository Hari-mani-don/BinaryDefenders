//function print between two intervels version V1

#include<stdio.h>
int printPrime(int lower,int upper);
 

int main(){
    int lower, upper;
    printf("Input lower number: ");
    scanf("%d", &lower);
    printf("Input upper number: ");
    scanf("%d", &upper);
    
   
     printPrime(lower, upper);
     
    return 0;
}

int isPrime(int num){
        int prime=1;
          for(int i=2;i<=num/2;i++){
              if(num%i==0){
               prime=0;
                break;
            }
         }
         
         if(num>1 && prime==1){
            return num;
        }
}

int printPrime(int lower,int upper){
   int lo=lower;
    while(lo<=upper){
        if(isPrime(lo)){
            printf("%d ", lo);
        }
        lo++;
    }
}






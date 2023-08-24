//function print between two intervels version V2

#include<stdio.h>
int isPrime(int lower, int upper);
 

int main(){
    int lower, upper;
    printf("Input lower number: ");
    scanf("%d", &lower);
    printf("Input upper number: ");
    scanf("%d", &upper);
    
   
     isPrime(lower, upper);
     
    return 0;
}

int isPrime(int lower, int upper){
    
    for(int j=lower;j<=upper;j++){
        int prime=1;
          for(int i=2;i<=j/2;i++){
              if(j%i==0){
               prime=0;
                
            }
         }
         
         if(prime==1){
            printf(" %d ", j);
        }
    }
    
    
        
}






//function whethe check number is prime, Armstrong  and Perfect version V2

#include<stdio.h>
void isPrime(int num);
 int isPerfect(int num);
int poww(int base, int ex);
int length(int num);
int isArmstrong(int num);

int main(){
    int n;
    printf("Input any number: ");
    scanf("%d", &n);
    
   
     isPrime(n);
     length(n);
     isPerfect(n);
     isArmstrong(n);
    return 0;
}

void isPrime(int num){
    int prime=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            prime=0;
            break;
        }
        
    }
    
    if(prime==1){
            printf(" %d is prime number\n", num);
        }
        else{
            printf(" %d is not prime number\n", num);
        }
}

int isPerfect(int num){
    int n=2;
    while(n<10){
         int sum= (poww(2,n-1)) * (poww(2, n)-1);  
          n++;
         if(sum<=num){
              if(sum==num){
              printf("%d is Perfect number\n", num);
              break;
                }
               
         }
         else{
             if(sum>num){
                 printf("%d is not Perfect number\n", num);
                  break;
              }
            }
         
    }
}

int poww(int base, int ex){
    int sum=1;
    for(int i=0;i<ex;i++){
        sum*=base;
    }
    
  return sum;
}

int length(int num){
  int temp=num, length=0;
    while(temp!=0){
        temp/=10;
        length++;
    }
    
    return length;
}

int isArmstrong(int num){
    int temp, temp2=num, sum=0;
    int le=length(num);
    
    for(int i=0;i<3;i++){
      temp=temp2%10;
      sum=sum+(temp * temp * temp);
      temp2/=10;
      
    }
    
    
    if(sum==num){
        printf("%d is Armstrong number", num);
    }
    else{
        printf("%d is not Armstrong number", num);
    }
    
}



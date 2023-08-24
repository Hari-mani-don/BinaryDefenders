//function use to print all Perfect number version V2

#include<stdio.h>

int printperfectNumber(int lower, int upper);
int poww(int base, int ex);

int main(){
    int lower, upper;
    printf("input lower and upper number; ");
    scanf("%d %d", &lower, &upper);
    
    printperfectNumber(lower, upper);
   
    return 0;
    
}

int poww(int base, int ex){
    int sum=1;
    for(int i=0;i<ex;i++){
        sum*=base;
    }
    return sum;
}
int printperfectNumber(int lower, int upper){
    int lo=lower;
   if(lo==1){
       lo+=1;
   }
    while(lo<=upper){
        int sum=0;
       sum=(poww(2,lo-1)) * (poww(2,lo)-1);
       if(sum>100){
           return 0;
       }
       else
       {
           printf("%d ", sum);
       }
      
       lo++;
    }   
}





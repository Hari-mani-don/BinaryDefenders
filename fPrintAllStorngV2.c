//function use to print all strong number V1

#include<stdio.h>
int isfactorial(int num);
int printStrongNumber(int lower, int upper);
int length(int num);
int main(){
    int lower, upper;
    printf("input lower and upper number; ");
    scanf("%d %d", &lower, &upper);
    
    printStrongNumber(lower, upper);
   
    return 0;
    
}

int length(int num){
    int temp=num, length=0;
    while(temp!=0){
        temp/=10;
        length++;
    }
    return length;
   
}

int printStrongNumber(int lower, int upper){
    int le, lo=lower;
   le=length(lower);
   
    while(lo<=upper){
        int le=length(lo);
         int temp2, temp=lo, sum=0;
         for(int i=0;i<le;i++){
             temp2=temp%10;
             sum+=isfactorial(temp2);
             temp/=10;
         }
         if(sum==lo){
            printf("%d ", lo);
         }
         lo++;
         sum=0;
    }
   
}

int isfactorial(int num){
    int sum=1;
    for(int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
}




//function use to print all Armstrong number V1

#include<stdio.h>
int isfactorial(int num);
int printArmStrongNumber(int lower, int upper);
int length(int num);
int main(){
    int lower, upper;
    printf("input lower and upper number; ");
    scanf("%d %d", &lower, &upper);
    
    printArmStrongNumber(lower, upper);
   
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

int printArmStrongNumber(int lower, int upper){
    int le, lo=lower;
   
    while(lo<=upper){
       le=length(lo);
       
         int temp2, temp=lo, sum=0;
         for(int i=0;i<le;i++){
            temp2=temp%10;
             sum+=temp2 * temp2  * temp2;
             temp/=10;
         }
         if(sum==lo){
            printf("%d ", lo);
         }
         lo++;
         sum=0;
    }
   
}





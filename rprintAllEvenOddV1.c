//recursion use to print all even and odd number version V1

#include<stdio.h>
int printAllEven(int lower, int upper);
int printAllOdd(int lower, int upper);
int main(){
    int lower, upper;
    printf("input lower limit: ");
    scanf("%d", &lower);
    printf("input upper limit:");
    scanf("%d", &upper);
    printf("Even Number: ");
    printAllEven(lower, upper);
    printf("\nOdd Number: ");
    printAllOdd(lower, upper);
  return 0;    
}


int printAllEven(int lower, int upper){
    if(lower>upper){
        return 0;
    }
    else{
        if(lower%2==0){
            printf("%d", lower);
        }
    }
    printAllEven(lower+1, upper);
}

int printAllOdd(int lower, int upper){
    if(lower>upper){
        return 0;
    }
    else{
        if(lower%2==1){
            printf("%d", lower);
        }
    }
    printAllOdd(lower+1, upper);
}

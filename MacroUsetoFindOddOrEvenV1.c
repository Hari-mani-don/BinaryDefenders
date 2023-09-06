//Macro use to find odd or even

#include<stdio.h>
#define EVEN(a) (a & 1)
int main(){
    int x=11;
    if(EVEN(x)==0){
        printf("Even number");
    }else{
        printf("odd number");
    }
    
    return 0;
}

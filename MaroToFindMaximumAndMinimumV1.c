//Macro use to find maximum and minimum
#include<stdio.h>
#define MAX(a, b) (a < b)
int main(){
    int x=12;
    int y=11;
    if(!MAX(x,y)){
        printf("x is greaterthan");
    }else{
        printf("y is greaterthan");
    }
    
    return 0;
}

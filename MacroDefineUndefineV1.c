//Macro define and undefine

#include<stdio.h>
#define SIZE 30
int main(){
    printf("Befor: %d\n", SIZE);
    
    #ifdef SIZE
    #undef SIZE
    #endif
    
    #define SIZE 20
    printf("After: %d\n", SIZE);
}

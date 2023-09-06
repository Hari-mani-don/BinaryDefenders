//Macro use to find qube and square of a number

#include<stdio.h>
#define SQUARE(a) (a*a)
#define QUBE(a) (a*a)*a
int main(){
    int x=10;
    printf("SQUARE of: %d\n", SQUARE(x));
    printf("QUBE of %d\n", QUBE(x));
    
    return 0;
}

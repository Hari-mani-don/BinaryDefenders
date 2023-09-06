//arith.h

#ifndef ARITH_H
#define ARITH_H

float sum(float, float);
float div(float, float);
float sub(float, float);
float mul(float, float);
int  mod(int, int);

#endif


//next file arith.c

float sum(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x -y;
}
float div(float x, float y)
{
    return (x==0 || y==0)
             ? 0
             : (x/y);
}
float mul(float x, float y)
{
    return x * y;
}
int mod(int x, int y)
{
    return x % y;
}


//next file main.c

#include<stdio.h>
#include "arith.h"
int main(){
    int a=10;
    int b=20;

    printf("Sum of :%.2f\n", sum(a, b));
    printf("Subtract of :%.2f\n", sub(a, b));
    printf("Multiplication of :%.2f\n", mul(a, b));
    printf("Division of :%.2f\n", div(a, b));
    printf("Modularation of :%d\n", mod(a, b));

    return 0;
}

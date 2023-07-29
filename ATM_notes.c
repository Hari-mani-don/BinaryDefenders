/*Write a C program to input amount from user and print minimum number of notes 
(Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
How to the minimum number of notes required for the given amount in C programming. 
Program to find minimum number of notes required for the given denomination. 
Logic to find minimum number of denomination for a given amount in C program.*/

#include<stdio.h>
int main(){
    int num, num1=500, num2=200, num3=100, num4=50, num5=20, num6=10, num7=5, num8=2, num9=1;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    printf("Enter the amount to check notes: ");
    scanf("%d", &num);
    
    if(num1<=num){
        a=num/num1;
        num=num%num1;
    }
     if(num2<=num){
        b=num/num2;
        num=num%num2;
    }
     if(num3<=num){
        c=num/num3;
        num=num%num3;
    }
     if(num4<=num){
        d=num/num4;
        num=num%num4;
    }
     if(num5<=num){
        e=num/num5;
        num=num%num5;
    }
     if(num6<=num){
        f=num/num6;
        num=num%num6;
    }
     if(num7<=num){
        g=num/num7;
        num=num%num7;
    }
     if(num8<=num){
        h=num/num8;
        num=num%num8;
    }
     if(num9<=num){
        i=num/num9;
        num=num%num9;
    }
    printf("500 : %d\n", a);
    printf("200 : %d\n", b);
    printf("100 : %d\n", c);
    printf("50  : %d\n", d);
    printf("20  : %d\n", e);
    printf("10  : %d\n", f);
    printf("5   : %d\n", g);
    printf("2   : %d\n", h);
    printf("1   : %d\n", i);
    
    return 0;
    
}

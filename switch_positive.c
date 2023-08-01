/*  Write a C program to input a number and check positive negative or zero using switch case.
Checking negative, positive or zero using switch case is little tricky. In this example, 
I will explain how to check positive negative or zero using switch case.
However, it is not recommended way, it’s just for learning.
*/


#include<stdio.h>
int main(){
    int num, a;
    printf("Enter the number: ");
    scanf("%d", &num);
    a=num==0;
    
    switch(num > 0)
    {
        case 1: 
           printf("number is positive");
           break;
        case 0:
           switch(a){
               case 1:
                   printf("number is 0");
                   break;
                case 0:
                   printf("number is negative");
           }
           break;
        
    }
    return 0;
}

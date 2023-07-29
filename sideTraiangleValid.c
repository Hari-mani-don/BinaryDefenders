/* Write a C program to input side of a triangle and check whether triangle 
is valid or not using if else. How to check whether a triangle can be formed 
or not if sides of triangle is given using if else in C programming. 
Logic to check triangle validity if sides are given in C program.
*/

#include<stdio.h>
int main(){
    int firstSide, secondSide, thirdSide, sum;
    printf("Enter the firstSide: ");
    scanf("%d", &firstSide);
    printf("Enter the secondSide: ");
    scanf("%d", &secondSide);
    printf("Enter the thirdSide: ");
    scanf("%d", &thirdSide);
    if(firstSide +secondSide>thirdSide && firstSide+thirdSide>secondSide && 
       secondSide+thirdSide>firstSide){
        printf("The side valid ");
    }
    else{
       printf("The side not valid ");    
    }
        
    return 0;
}

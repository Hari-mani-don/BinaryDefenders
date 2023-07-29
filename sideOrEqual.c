/* Write a C program to input sides of a triangle and check whether
a triangle is equilateral, scalene or isosceles triangle using if else.
How to check whether a triangle is equilateral, scalene or isosceles triangle in
C programming. Logic to classify triangles as equilateral,
scalene or isosceles triangle if sides are given in C program. 
*/


#include<stdio.h>
int main(){
    int side1, side2, side3;
    printf("Enter the sides of traingles: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if(side1==side2 && side2==side3){
        printf("If all sides are equal");
    }
    else if(side1==side2 || side1==side3 || side2==side3){
        printf("If two sides are equal");
        
    }
    else{
        printf("If none sides are equal");
    }
    return 0;
}

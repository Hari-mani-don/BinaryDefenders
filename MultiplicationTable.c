/* Write a C program to input a number from user and print multiplication table of the given 
number using for loop. How to print multiplication table of a given number in C programming.
Logic to print multiplication table of any given number in C program.
*/


#include<stdio.h>
int main(){
    int start, end, num;
    printf("which table you want to print : ");
    scanf("%d", &num);
    
    printf("Table starting number  : ");
    scanf("%d", &start);
    
    printf("Table ending number: ");
    scanf("%d", &end);
    
    for(int i=start; i<=end; i++){
        printf("%d x %d = %d\n", i, num, (i*5));
    }
    
    
}

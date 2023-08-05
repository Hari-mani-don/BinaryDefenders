/* Write a C program to input a number from user and find all factors of the given number using for loop. How to find factors of a number in C program. Logic to find all factors of a given number
in C programming.
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Factors of %d : ", n);
    for(int i=1;i<=n;i++){
        if(n % i == 0 ){
            printf("%d ", i);
        }
    }
    return 0;
}

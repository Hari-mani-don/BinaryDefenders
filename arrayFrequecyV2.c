/*  Write a C program to count frequency of digits in a given number. How to find frequency 
of digits in a given number using loop in C programming. 
Logic to find total occurrences of each digits in a given number in C program.
*/

#include<stdio.h>
#define BASE 10
int main(){
    int n, last;
    int fre[BASE];
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while(n!=0){
        last=n%10;
        n/=10;
        fre[last]++;
        
    }
    for(int i=0; i<BASE; i++){
        printf("Frequency of %d = %d\n", i, fre[i]);
    }
    
    return 0;
    
}

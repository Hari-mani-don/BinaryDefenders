/* How to find total digits in a given integer using loop in C programming.
Logic to count digits in a given integer without using loop in C program.
*/


#include<math.h>
#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    count = (n==0)?1:(log10(n) + 1);
    printf("count: %d", count);
}

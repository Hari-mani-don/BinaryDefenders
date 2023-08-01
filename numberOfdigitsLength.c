/* Write a C program to input a number from user and count number of digits in the given integer 
using loop. How to find total digits in a given integer using loop in C programming.
Logic to count digits in a given integer without using loop in C program. 
*/


#include<stdio.h>
int main(){
    int num, count;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for( ;num>0; ){ //num!='0';
        num=num/10;
        count++;
    }
    // while(num!='\0') {
    //   num=num/10;
       
    //     count++;
    // }
    printf("%d", count);
}

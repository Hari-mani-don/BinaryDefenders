/* Write a C program to count frequency of digits in a given number. 
How to find frequency of digits in a given number using loop in C programming.
Logic to find total occurrences of each digits in a given number in C program.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, last, count=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    digit=(int) log10(n);
    int temp=n;
    for(int i=0;i<10;i++){
        for(int j=0; j<(digit+1);j++){
            last=temp%10;
            temp=temp/10;
            if(i==last){
                count++;
            }
        }
        printf("Frequency of %d = %d\n", i, count);
        count=0;
        temp =n;
    }
    
    return 0;
    
}

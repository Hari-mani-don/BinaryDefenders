/* Write a C program to input binary number from user and find twos complement of the binary number. 
How to find 2s complement of a binary number in C. Logic to find twos complement of a binary number in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, sum, size, lastDigit;
    printf("input binary number: ");
    scanf("%d", &n);
    
    size=(int)log10(n);
    for(int i=0;i<=size;i++){
        lastDigit=n%10;
        n/=10;
        if(lastDigit==0){
            sum=1;
            printf("%d", sum);
        }
        else{
            if(lastDigit==1){
                sum=0;
                printf("%d",sum);
            }
        }
    }
  return 0;    
}

/* Write a C program to input a number and check whether the number is Perfect number or not. 
How to check perfect number in C programming using loop. Logic to check perfect number in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int end, prime, x, a, b, sum;
    printf("Enter the number: ");
    scanf("%d", &end);
    
    for(int i=2;i<=end;i++){
        prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            x=i-1;
            a=pow(2,x);
            b=pow(2,i)-1;
            sum=a*b;
        }
        if(sum==end){
            printf("%d is a perfect Number", end);
            break;
        }
        else{
            if(sum>end){
                printf("%d is not perfect number", end);
                break;
            }
        }
        x=0, a=0, b=0, sum=0;
        
    }
    return 0;
}

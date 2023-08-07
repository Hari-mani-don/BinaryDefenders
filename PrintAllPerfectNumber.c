/* Write a C program to find all Perfect numbers between 1 to n. C program to find all perfect numbers between given range.
How to generate all perfect numbers between given interval using loop in C programming. 
Logic to find all perfect numbers in a given range in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int end, prime, a, b, x, sum=0;
    printf("Enter the number; ");
    scanf("%d", &end);
    
    printf("perfect number: ");
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
        if(sum>end){
          break;  
        }
        else{
           if(sum!=0){
            printf("%d ", sum);
           }
        }
        x=0, a=0, b=0, sum=0;
    }
    return 0;
    
}

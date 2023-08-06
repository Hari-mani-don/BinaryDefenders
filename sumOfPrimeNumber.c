/* Write a C program to find sum of all prime numbers between 1 to n using for loop.
C program to generate sum of all primes between
a given range. Logic to find sum of prime numbers in a given range.
*/

#include<stdio.h>
int main(){
    int start, end, sum=0, prime;
    printf("Enter the start and end: ");
    scanf("%d %d", &start, &end);
    
    if(start<2)
       start=2;
       
    //   printf("Sum of prime number: ");
      for(int i=start;i<=end;i++){
          prime=1;
          for(int j=2;j<=i/2;j++){
              if(i%j==0){
                  prime=0;
                  break;
              }
              
          }
          if(prime==1){
             sum+=i;
          }
      }
      printf("sum of prime number: %d", sum);
      return 0;
}

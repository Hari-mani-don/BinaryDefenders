/* Write a C program to print all Prime numbers between 1 to n using loop. How to print all prime numbers
between given interval using loop in C program.
Logic to print prime numbers in a given range in C program.
*/

#include<stdio.h>
int main(){
    int start, end, prime=0;
    printf("Enter the start and end: ");
    scanf("%d %d", &start, &end);
    
    
    if(start<2)
        start=2;
        printf("prime number: ");
    for(int i=2;i<=end;i++){
        prime=1;
        
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
           
        }
        
    if(prime==1){
                  printf("%d ", i);
              }
            
    }
    return 0;
}

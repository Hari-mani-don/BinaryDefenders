/* Write a C program to input a number from user and find Prime factors of the given number using loop. 
C program to list all prime factors of a given number. Logic to find prime factors of a number in C programming.
 */

#include<stdio.h>
int main(){
    int n, prime, x=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if(n<2){
      printf("tray again. above 2 ");
      
    }
    
    printf("prime factors of: ");
    for(int i=2;i<=n;i++){
        prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        
        if(prime==1){
           x=i;
          }
          
        while(1){
            if(n%x==0){
                n/=x;
                printf("%d ", x);
                
            }
            else{
                break;
            }
        }
    }
    return 0;
}

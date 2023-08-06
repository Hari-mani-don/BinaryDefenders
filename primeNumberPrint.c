/* Write a program in C to input a number and check whether the number is prime number or not using for loop.
How to check prime numbers using loop in C programming.
Logic to check prime numbers in C programming.
*/

#include<stdio.h>
int main(){
    int n, first, end;
    printf("Enter the first: ");
    scanf("%d", &first);
    printf("Enter the end: ");
    scanf("%d", &end);
    
    printf("prime number: ");
    for(int i=first; i<end;i++){
        
    if(i != 2 ){
        if(i!=3){
            
        
            if(i%2==0 || i%3==0){
              ///
             }
            else{
               printf("%d ", i);
            
              }
        }
         else { 
               printf("%d ", i);
        
          }
       }
        
      else { 
        printf("%d ", i);
        
       }
    }  
    return 0;
}

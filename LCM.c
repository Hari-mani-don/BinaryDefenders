/* Write a C program to input two numbers from user and find LCM (Lowest Common Multiple) using loop. 
How to find LCM of two given numbers in C programming. 
Logic to find LCM of two number in C program.
*/

#include<stdio.h>
int main(){
    int num1, num2, sum=0, a;
    
    printf("Enter the num1 and num2:");
    scanf("%d %d", &num1, &num2);
    
    sum=num1 * num2;
    int min=num1<num2?num1:num2;
    int max=num1>num2?num1:num2;
    int b[sum];
    int x=0, y=1;
    for(int i=0; i<sum;i++){
        for(int j=0;j<i+1;j++){
            a=min * y;
            b[x]=max * y;
            if(a==b[j]){
            printf("%d ", a);
            goto hari;
          }
        }  
        x++;
        y++;
    }
    hari:
    
   return 0;
}

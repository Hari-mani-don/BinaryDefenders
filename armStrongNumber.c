/* Write a C program to input a number from user and check whether given number is Armstrong number or not.
How to check Armstrong numbers in C program. Logic to check Armstrong numbers in C programming.
*/

#include<stdio.h>
int main(){
    int n, sum=1, temp, length=0, temp2, result=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp3=n;
       while(temp3!=0){
           temp3/=10;
        length++;
       }
       temp2=n;
       temp=n%10;
    for(int i=0;i<length;i++){
           for(int j=0;j<length;j++){
                   sum=sum*temp;
                   
          }
          result+=sum;
         
              n=n/10;
              temp=n%10;
              sum=1;
       }
       
       
      if(temp2==result){
      printf("Armstrong number ");
      }
      else{
          printf("not Armstrong");
      }
    return 0;
}

/* Write a C program to input decimal number from user and convert to Hexadecimal number system. How to convert Decimal to Hexadecimal 
number system in C programming. Logic to convert decimal to hexadecimal number system in C programming.
*/

#include<stdio.h>
int main(){
    int n, length, sum=0;
    
    printf("Input Decimal number: ");
    scanf("%d", &n);
    int temp=n;
    int temp2;
    
    while(temp>=16){
        temp/=16;
        length++;
    }
    int a[length];
   int i=length-1;
    while(n>=16){
        temp2=n%16;
        n/=16;
        a[i]=temp2;
        i--;
    }
     if(n>=10 && n<=15){
        switch(n){
            case 10:
              printf("A");
              break;
              case 11:
              printf("B");
              break;
              case 12:
              printf("C");
              break;
              case 13:
              printf("D");
              break;
              case 14:
              printf("E");
              break;
              case 15:
              printf("F");
              break;
        }
    }
    else{
        printf("%d", n);
    }
    for(int k=0;k<length;k++){
        
         if(a[k]>=10 && a[k]<=15){
             switch(a[k]){
              case 10:
              printf("A");
              break;
              case 11:
              printf("B");
              break;
              case 12:
              printf("C");
              break;
              case 13:
              printf("D");
              break;
              case 14:
              printf("E");
              break;
              case 15:
              printf("F");
              break;
             }
            
            }
              else{
                printf("%d", a[k]);
         } 
    }    
   
    return 0;
}

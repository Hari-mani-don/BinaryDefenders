/* Write a C program to input hexadecimal number from user and convert to binary number system. How to convert hexadecimal number system to binary
number system in C program. Logic to convert hexadecimal to binary number system in C programming.
*/

#include <stdio.h>
#define BASE 16

int main()
{
   
    char b[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   
   int e[17];
    int length=0,sum=0, sum2, c=BASE-1,L, n, carry=1;
    
    printf("how many values do you want to store: ");
    scanf("%d", &n);
     char a[n];
     int d[n];
    printf("Input hexa number: ");
    for(int i=0;i<n;i++){
        scanf(" %c", &a[i]);
    }
  for(int j=0;j<n;j++){
      for(int n=0;n<16;n++){
          if(a[j]==b[n]){
              d[j]=n;
              break;
          }
      
      
     }
     printf("sum: %d\n", d[j]);
    
  }
  L=n-1;
    for(int o=0;o<n;o++){
        
          sum=d[L];
        if(sum>=2){
          for(int l=0;l<4;l++){
              if(sum>=2){
                sum2=sum%2;
                e[c]=sum2;
                 sum/=2;
                c--;
              }
              else{
                  if(carry==1){
                      e[c]=sum;
                      carry=0;
                      c--;
                  }
                  else{
                      e[c]=0;
                      c--;
                  }
              }
            
            }
            carry=1;
            
            
        }
        else{
            for(int m=0;m<4;m++){
                if(sum==1 && carry==1){
                e[c]=sum;
                c--;
                carry=0;
                  }
              else{
                e[c]=0;
                c--;
              }
            }
            carry=1;
        }
        L--;
        
    }

    
    for(int k=0;k<BASE;k++){
        printf("%d ", e[k]);
    }
    
    

    return 0;
}

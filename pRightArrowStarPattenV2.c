//Right Arrow Star Patten

#include<stdio.h>
int main(){
    int n, a=1,b, co;
    printf("input number of rows: ");
    scanf("%d", &n);
    b=n-1;
    for(int row=1;row<2*n;row++){
    
        co=(row<=n)?n+row:(2*n)-a++;
        for(int col=0;col<co;col++){
            if(row<=n && col<2*row-1|| row>n && col<(2*b)-1){
                printf(" ");
                 }
              
            else{
                 printf("*");
            }
            
            
         }
         printf("\n");
         
          if(row>n){
                b--;
            }
    }
    return 0;
    
}

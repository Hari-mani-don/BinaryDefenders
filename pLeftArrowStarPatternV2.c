//Left Arrrow Star Pattern

#include<stdio.h>
int main(){
    int n, a, b, co;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    a=4,b=n;
    for(int row=0;row<2*n-1;row++){
        co=(row<n)?2*n-(2*row):a;
        for(int col=0;col<co;col++){
            if(row<n && col<n-row||row>=n && col<n-b+2){
                printf(" ");
            }
            else
               printf("*");
        }
        printf("\n");
        if(row>=n){
            b--;
            a+=2;
        }
       
        
    }
    return 0;
}

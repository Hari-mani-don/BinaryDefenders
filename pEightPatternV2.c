//Eight Star pattern 

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<2*n;row++){
        for(int col=1;col<=n;col++){
            if((row==1||row==n||row==2*n-1) && (col>1 && col<n)){
                printf("*");
            }
            else if((row==1||row==n||row==2*n-1) && (col>=1 && col<=n)){
                printf(" ");
            }
            else{
                if(col==1 || col==n){
                    printf("*");
                }
                else
                   printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

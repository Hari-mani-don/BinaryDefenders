/*Hollow pyramid Star pattern Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=0;row<n;row++){
    
        for(int col=1;col<=(n-row)+(2*row+1);col++){
            if(col==(n-row)+(2*row+1)||col==n-row+1||(row==n-1 && col>1)){
                  printf("*");
            }
            else{
                 printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}

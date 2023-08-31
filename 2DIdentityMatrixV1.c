//2D Matrix find Identity matrix version v1

#include<stdio.h>
#define SIZE 3
int identityMatrix(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   identityMatrix(b);
   
  return 0;
}

int identityMatrix(int a[SIZE][SIZE]){
    int b[SIZE][SIZE];
    int up=1, low =1;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(row==col && a[row][col]!=1){
                up=0;
            }
           else{
               if(row!=col && a[row][col]!=0){
                   low=0;
               }
           }
        }
    }
    if(up==1 && low==1){
        printf("It is an Identity Matrix");
    }
    else{
        printf("It is not an Identity Matrix");
    }
   
}

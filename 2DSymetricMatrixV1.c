//2D Matrix check symmetric matrix version v1

#include<stdio.h>
#define SIZE 3
int SymetrixMatrix(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   SymetrixMatrix(b);
   
  return 0;
}

int SymetrixMatrix(int a[SIZE][SIZE]){
    int b[SIZE][SIZE];
   int isSymetrix=1;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            b[col][row]=a[row][col];
        }
    }
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
           if(b[row][col]!=a[row][col]){
               isSymetrix=0;
           }
        }
    }
    if(isSymetrix==1){
        printf("The given matrix is Symetrix ");
    }
    else{
        printf("The given matrix is not Symetrix");
    }
}

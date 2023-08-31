//2D Matrix find transpose of a matrix version v1

#include<stdio.h>
#define SIZE 3
int transposeMatrix(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   transposeMatrix(b);
   
  return 0;
}

int transposeMatrix(int a[SIZE][SIZE]){
    int b[SIZE][SIZE];
    for(int row=0;row<SIZE;row++){
       
        for(int col=0;col<SIZE;col++){
            b[col][row]=a[row][col];
           
        }
    }
    for(int row=0;row<SIZE;row++){
       
        for(int col=0;col<SIZE;col++){
            printf("%d ", b[row][col]);
        }
        printf("\n");
    }
   
}

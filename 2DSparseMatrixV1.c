//2D Check Matrix is Sparse or Not Version V1

#include<stdio.h>
#define SIZE 3
int sparseMatrix(int a[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    printf("Enter array Element: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
   sparseMatrix(a);
  return 0;    
}
int sparseMatrix(int a[SIZE][SIZE]){
    int count=0, num=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(a[row][col]==0){
                count++;
            }
            else{
                num++;
            }
        }
    }
    
    if(num<count){
        printf("The given Matrix is Sparse Matrix");
    }
    else{
        printf("The given Matrix is not Sparse Matrix");
    }
}    

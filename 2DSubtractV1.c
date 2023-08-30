//Add 2 matrix Version V1

#include<stdio.h>
int sumOfArray( int row, int col,int a[row][col], int b[row][col]);
#define MAX_SIZE 100
int main(){
    int a[3][3];
    int b[3][3];
    int col, row;
    printf("Enter col size: ");
    scanf("%d", &col);
    printf("Enter col size: ");
    scanf("%d", &row);
    
    printf("Input Element in a : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    printf("Input Element in b : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    sumOfArray(row, col,a, b);
  return 0;
}
int sumOfArray( int row, int col, int a[row][col], int b[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ", a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}

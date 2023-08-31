//2D Matrix Multiply two Matrix 

#include<stdio.h>
#define SIZE 3
int addTwoMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    int b[SIZE][SIZE];
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    printf("Enter array element in b:");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    addTwoMatrix(a, b);
  return 0;
}

int addTwoMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE]){
    int c[SIZE][SIZE];
    int sum=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            for(int i=0;i<SIZE;i++){
                sum+=a[row][i] * b[i][col];
            }
            c[row][col]=sum;
            sum =0;
        }
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

//2D Matrix Two Matrices are Equal or Not

#include<stdio.h>
#define SIZE 3
int checkMatrixEqual(int a[SIZE][SIZE], int b[SIZE][SIZE]);
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
    checkMatrixEqual(a, b);
  return 0;
}

int checkMatrixEqual(int a[SIZE][SIZE],int b[SIZE][SIZE]){
    int count=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(a[row][col]==b[row][col]){
                count++;
            }
        }
    }
    if(count==SIZE*SIZE){
        printf("Both Matrix are equal ");
    }
    else{
        printf("Both Matrix are not equal");
    }
}

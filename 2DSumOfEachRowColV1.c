//2D Matrix sum of each row and columns of a matrix version v1

#include<stdio.h>
#define SIZE 3
int SumOfEachRow(int a[SIZE][SIZE]);
int SumOfEachCol(int a[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    
   SumOfEachRow(a);
   SumOfEachCol(a);
  return 0;
}

int SumOfEachRow(int a[SIZE][SIZE]){
    int sum=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
           sum+=a[row][col];
        }
        printf("Sum of row %d = %d\n", row+1, sum);
        sum=0;
        
    }
}
int SumOfEachCol(int a[SIZE][SIZE]){
    int sum=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
           sum+=a[col][row];
        }
        printf("Sum of col %d = %d\n", row+1, sum);
        sum=0;
        
    }
}

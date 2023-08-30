//Multiplication of Matrix Version V1

#include<stdio.h>
#define SIZE 3
int Multiple(int a[SIZE][SIZE], int m);
int main(){
    int a[SIZE][SIZE];
    
    
    int row, col, m;
   
    printf("Enter arry element: ");
    for(row=0;row<SIZE;row++){
        for(col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    printf("Enter Multiplier: ");
    scanf("%d", &m);
    Multiple(a, m);
  return 0;
}

int Multiple(int a[SIZE][SIZE], int m){
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            printf("%d ", a[row][col] * m);
        }
        printf("\n");
    }
}

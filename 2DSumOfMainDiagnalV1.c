//2D Matrix Sum Of Main Diagnal version v1

#include<stdio.h>
#define SIZE 3
int SumOfMain(int a[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    
    SumOfMain(a);
  return 0;
}

int SumOfMain(int a[SIZE][SIZE]){
    int sum=0;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(row==col){
            sum+=a[row][col];
            }
        }
        
    }
    printf("Sum of Main diagnal: %d", sum);
    
}

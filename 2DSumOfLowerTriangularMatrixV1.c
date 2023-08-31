//2D Matrix  sum of lower triangular matrix version v1

#include<stdio.h>
#define SIZE 3
int sumOflower(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   sumOflower(b);
   
  return 0;
}

int sumOflower(int a[SIZE][SIZE]){
     int sum=0;
    for(int row=0;row<SIZE;row++){
       
        for(int col=0;col<SIZE;col++){
            if(col<row){
                    sum+=a[row][col];
                    
            }
           
        }
    }
    for(int row=0;row<SIZE;row++){
       
        for(int col=0;col<SIZE;col++){
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    printf("sum of lower triangular Matrix: %d", sum);
}

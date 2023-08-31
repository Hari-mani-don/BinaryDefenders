//2D Matrix  interchange diagonals of a matrix version v1

#include<stdio.h>
#define SIZE 4
int interChangeMinorMajor(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   interChangeMinorMajor(b);
   
  return 0;
}

int interChangeMinorMajor(int a[SIZE][SIZE]){
    int i=SIZE-1;
    for(int row=0;row<SIZE;row++){
        
        for(int col=0;col<1;col++){
            if(row==row){
                    int temp= a[row][row];
                    a[row][row]=a[row][i];
                    a[row][i]=temp;
                    i--;
            }
        }
    }
    
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

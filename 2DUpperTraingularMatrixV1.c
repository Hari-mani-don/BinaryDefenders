//2D Matrix  find upper triangular matrix version v1

#include<stdio.h>
#define SIZE 3
int upper(int a[SIZE][SIZE]);

int main(){
    int b[SIZE][SIZE];
    
    printf("Enter array element in a: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
    
   upper(b);
   
  return 0;
}

int upper(int a[SIZE][SIZE]){
     int up=1, low=1;
    for(int row=0;row<SIZE;row++){
       
        for(int col=0;col<SIZE;col++){
            if((col>=row) && ((a[row][col])==0)){
                    up=0;
                    
            }
            else{
                if(col<row && (a[row][col])>0){
                    low=0;
                   
                }
            }
        }
    }
    
    for(int row=0;row<SIZE;row++){
        
        for(int col=0;col<SIZE;col++){
          printf("%d ", a[row][col]);
        }
        printf("\n");
    }            
    if(up==1 && low==1){
        printf("matrix is upper triangle");
    }
    else
       {
           printf("matrix is not upper triangle");
       }
}

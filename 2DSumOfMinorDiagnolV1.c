//2D sum Of Minor Diagnol Version V1

#include<stdio.h>
#define SIZE 4
int sumOfMinor(int a[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    printf("Enter array element: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    sumOfMinor(a);
  return 0;
}

int sumOfMinor(int a[SIZE][SIZE]){
    int sum=0, i=SIZE-1;
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(i==col){
                sum+=a[row][i];
                i--;
            }
        }
    }
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            printf("%d", a[row][col]);
        }
        printf("\n");
    }
    printf("Sum Of Minor : %d", sum);
}    

//2D determinent of Matrinx Version V1

#include<stdio.h>
#define SIZE 3
int determinent(int a[SIZE][SIZE]);
int main(){
    int a[SIZE][SIZE];
    printf("Enter array Element: ");
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
    determinent(a);
  return 0;    
}
int determinent(int a[SIZE][SIZE]){
    int deter=a[0][0] * (a[1][1]*a[2][2]-a[1][2]*a[2][1]) -a[0][1] * (a[1][0]*a[2][2]-a[1][2]*a[2][0]) + a[0][2] * (a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("%d", deter);
}    

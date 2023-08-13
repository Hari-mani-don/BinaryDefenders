/*Inverted Pyramid pattern program Version V1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        for(int sp=1;sp<=row;sp++){
            printf(" ");
        }
        for(int col=1;col<=(2*n)-(2*row-1);col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

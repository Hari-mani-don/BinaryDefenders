/*Mirrored Right Triangle Star Patterns Version V1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++){
        for(int space=0;space<n-rows;space++){
            printf(" ");
        }
        for(int col=0;col<rows;col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

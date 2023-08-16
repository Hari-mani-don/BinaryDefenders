//Number pattern 6

#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input numbr of Coloumns: ");
    scanf("%d", &col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if((row+1)/2==i || (col+1)/2==j){
                printf("0");
            }
            else
               printf("1");
        }
        printf("\n");
    }
    return 0;
}

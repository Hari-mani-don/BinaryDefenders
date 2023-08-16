//Number Pattern 5

#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input number of Coloumns: ");
    scanf("%d", &col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if((row/2)+1==i && (col/2)+1==j){
                printf("0");
            }
            else
               printf("1");
        }
        printf("\n");
    }
    return 0;
}

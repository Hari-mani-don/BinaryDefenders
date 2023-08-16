//Number Pattern V6
#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input number of coloumns: ");
    scanf("%d", &col);
    for(int i=1;i<=row;i++){
        for(int j=0;j<=col;j++){
            printf("%d", ((i+j)%2));
        }
        printf("\n");
    }
    return 0;
}

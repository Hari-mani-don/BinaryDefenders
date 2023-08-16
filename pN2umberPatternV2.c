//Number pattern 2
#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Inpu numbe of Coloums: ");
    scanf("%d", &col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d", (i%2));
        }
        printf("\n");
    }
    return 0;
}

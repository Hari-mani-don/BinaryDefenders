//Number of Patterns V3

#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input numbr of Coloums: ");
    scanf("%d", &col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<col;j++){
            printf("%d",!(j%2));    
            
        }
        printf("\n");
    }
            return 0;
}

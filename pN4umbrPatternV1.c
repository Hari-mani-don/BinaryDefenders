//Number Pattern 4
#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input number of Coloumns: ");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||j==1||j==col||i==row){
                printf("1");
            }
            else{
                printf("0");
            }
            
        }
        printf("\n");
    }
    return 0;
}

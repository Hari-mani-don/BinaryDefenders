//Number Pattern 17

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<2*n;row++){
        for(int col=1;col<2*n;col++){
            if(row==col || col==(2*n)-row){
                printf("X");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}

//Plus Star Pattern

#include<stdio.h>
int main(){
    int n, co;
    printf("input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<=2*n;row++){
        co=(row==n)?2*n:n;
        for(int col=1;col<=co;col++){
            if(col==n||row==n){
                printf("+");
            }
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}

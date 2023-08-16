//Number Pattern 10

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==1||row==n||col==1||col==n){
                printf("1");
            }
            else
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}

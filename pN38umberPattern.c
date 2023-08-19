//Number pattern 38

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<2*n;row+=2){
        for(int col=row;col<=2*n-1;col+=2){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

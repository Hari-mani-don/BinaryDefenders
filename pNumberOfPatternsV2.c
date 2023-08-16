//pNumber Patterns

#include<stdio.h>
int main(){
    int n, n1;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    printf("Input number of coloums: ");
    scanf("%d", &n1);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n1;col++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

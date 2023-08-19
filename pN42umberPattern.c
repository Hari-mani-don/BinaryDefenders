//Number pattern 42

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    int a=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-1;col++){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

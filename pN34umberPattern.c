//Number pattern 34

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=n;row>=1;row--){
        for(int col=row;col<=n;col++){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

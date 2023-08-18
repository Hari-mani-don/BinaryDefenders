
//Number Pattern 22
#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(col>(n-row)){
               printf("%d", row);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

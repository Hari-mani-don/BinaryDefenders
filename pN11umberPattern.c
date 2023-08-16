//Number Pattern 1
#include<stdio.h>
int main(){
    int n, co;
    printf("Input numbe of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        co=(row%2==1)?n:n-1;
        for(int col=1;col<=co;col++){
            if(row%2==1){
                printf(". ");
            }
            else{
                printf(" .");
            }
        }
        printf("\n");
    }
    return 0;
}

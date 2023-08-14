//Mirrored Half Diamond Star Pattern Version V2
#include<stdio.h>
int main(){
    int n;
    printf("input number of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<2*n;row++){
        for(int col=1;col<=n;col++){
            if(n-row>=col|| row-n>=col)
                printf(" ");
            else
              printf("*");
        }
        printf("\n");
    }
    return 0;
}

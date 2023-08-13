/*Pyramid star Pattern Version V2*/

#include<stdio.h>
int main(){
    int n, a;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    a=n;
    for(int row=1;row<2*n;row+=2){
        for(int col=1;col<=a+row;col++){
            if(col<=a)
                printf(" ");
            else
              printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}

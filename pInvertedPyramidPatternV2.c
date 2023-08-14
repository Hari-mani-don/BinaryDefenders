/*Inverted pyramid pattern Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows :");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*n)-(row-1);col++){
            if(col<=row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

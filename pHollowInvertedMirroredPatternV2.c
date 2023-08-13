/*Hollow Inverted Mirrored Triangle Star Patterns Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input numbr of Rows: ");
    scanf("%d", &n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==1||col==row||col==n){
                printf("*");
            }
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}

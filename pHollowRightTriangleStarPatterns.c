/*Hollow Right Triangle star Patterns Version V1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows:");
    scanf("%d", &n);
    for(int rows=1;rows<=n;rows++){
        for(int col=1;col<=rows;col++){
            if(rows==1||col==1||rows==col||rows==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

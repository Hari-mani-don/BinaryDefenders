/*Hollow Inverted Right Triangle Star pattern Version v1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int rows=0;rows<n;rows++){
        for(int col=1;col<=n;col++){
            if(rows==0||col==1||col==n-rows){
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

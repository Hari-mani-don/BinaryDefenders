/*Hollow Mirroed Rhombus Star Patterns Version V1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        for(int k=0;k<n;k++){
            if(i==0||k==0||k==n-1||i==n-1){
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

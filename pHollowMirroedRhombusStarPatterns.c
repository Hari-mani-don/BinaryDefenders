/*Hollow Mirroed Rhombus Star Patterns Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+n;j++){
            
            if(j<i){
                printf(" ");
            }
            else if(i==1||i==j||j==n+i||i==n){
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

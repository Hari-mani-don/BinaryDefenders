/* Hollow square star patterns*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || j==n || i==n || i==j || j==(n-i+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

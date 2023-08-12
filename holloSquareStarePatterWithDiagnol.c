/*Holo square Strar pattern with Diagnol*/

#include<stdio.h>
int main(){
    int n, a;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    a=n/2 + 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || j==n || i==n){
                printf("* ");
            }
            else if(i==a && j==a){
                printf("* ");
            }
            else if((i==a && i+1 ==j) || (i==a && i-1==j)){
                printf("  ");
            }
            else{
                if((i==a-1 && j==a) || (i==a+1 && j==a)){
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

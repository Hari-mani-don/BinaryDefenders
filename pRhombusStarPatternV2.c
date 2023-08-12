/* Rhombus Star patterns*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    int temp=n-1;
    int x=n*2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n*2-i);j++){
            if(j>=1 && j<=temp){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        temp--;
        x--;
        printf("\n");
    }
    return 0;
}

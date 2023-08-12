/* Hollow Rhombus Star patterns*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    int temp=n-1;
    int i;
    for( i=1;i<=n;i++){
        int x=n*2-i;
        for(int j=1;j<=x;j++){
            if(j>temp && i==1 || j==temp+1 || j==x || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        temp--;
    
        printf("\n");
    }
    return 0;
}

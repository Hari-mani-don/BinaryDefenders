/*Hollow Mirrored Right Triangle Star Patterns Version V1*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        
        for(int col=1;col<=n;col++){
            if(col==n||col==n-rows||rows==n-1){
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

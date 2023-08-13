/*Hollow Mirrored Right Triangle Star Patterns Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int sp=1;sp<n-rows;sp++){
            printf(" ");
        }
        for(int col=n-rows;col<=n;col++){
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

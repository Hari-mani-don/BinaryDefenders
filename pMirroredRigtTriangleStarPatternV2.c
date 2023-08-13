/*Mirrored Right Triangle Star Patterns Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++){
       
        for(int col=0;col<n;col++){
            if(col<n-rows){
                printf(" ");
            }
            else{
                 printf("*");
            }
           
        }
        printf("\n");
    }
    return 0;
}

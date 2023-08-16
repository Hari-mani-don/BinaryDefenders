//NUmber Pattern 13

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=1;row<n*2;row++){
        for(int col=1;col<n*2;col++){
            if(row%2==1){
                if(col%2==1){
                    printf("()");
                }
                else
                   printf("_");
                
            }
            else{
                if(col%2==1){
                printf("_");
                   }
                else
                  printf("()");
            
            }
            
        }
        printf("\n\n");
    }
    return 0;
}

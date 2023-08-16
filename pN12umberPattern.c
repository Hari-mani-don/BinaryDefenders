//NUmber Pattern 12

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=1;row<n*2;row++){
        for(int col=1;col<n*2;col++){
            if(row%2==1){
                if(col%2==1){
                    printf("/");
                }
                else
                   printf("\\");
                
            }
            else{
                if(col%2==1){
                printf("\\");
                   }
                else
                  printf("/");
            
            }
            
        }
        printf("\n\n");
    }
    return 0;
}

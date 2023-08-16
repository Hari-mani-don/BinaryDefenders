//Number Pattern 8

#include<stdio.h>
int main(){
    int row, col;
    printf("Input number of Rows: ");
    scanf("%d", &row);
    printf("Input number of Coloumns: ");
    scanf("%d", &col);
    
    for(int i=1;i<=row;i++){
        for(int j=0;j<col;j++){
            if(((i==1) || (i==row) ) && ((j==0)|| (j==col-1)) ){
                printf("1");
            }
            else if(j==0 || j==col-1 || ((i==1) || (i==row) && col>0)){
                    printf("0");
                    
             }
             else{
                 if((i+j)%2==0){
                     printf("0");
                 }
                 else
                    printf("1");
             }
                
        }
        printf("\n");
    }
    return 0;
}

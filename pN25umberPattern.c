//Number pattern 25

#include<stdio.h>
int main(){
    int n, b=1, a;
    printf("Input number of Rows: :");
    scanf("%d", &n);
    
    for(int row=1;row<=n;row++){
        a=row;
        for(int col=1;col<=n;col++){
            if(row==1){
                printf("%d", col);
            }
            else if(row>1 && a!=0){
                printf("%d", a--);
            }
            else{
                printf("%d", ++b);
            }
        }
        b=1;
        printf("\n");
    }
    return 0;
}
 

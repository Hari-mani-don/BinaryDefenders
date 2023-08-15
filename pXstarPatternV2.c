//X Star Pattern

#include<stdio.h>
int main(){
    int n, a=1;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<2*n;row++){
        for(int col=1;col<2*n;col++){
            if(col==row||col==2*n-a){
                printf("h");
            }
            else
                printf(" ");
        }
        printf("\n");
        a+=1;
    }
    return 0;
}

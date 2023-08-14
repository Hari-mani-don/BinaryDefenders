//Half Diamond Star pattern

#include<stdio.h>
int main(){
    int n, sum;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=1;row<2*n;row++){
        sum=row>n?2*n-row:row;
        for(int col=1;col<=sum;col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

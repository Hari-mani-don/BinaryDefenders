//Hollow diamond Star pattern

#include<stdio.h>
int main(){
    int n, a=1;
    printf("input number of rows: ");
    scanf("%d", &n);
    for(int row=0;row<2*n;row++){
        for(int col=0;col<2*n;col++){
            if(row<n && col<n-row || row<n && col>=n+row|| row>=n && col<row-n+1){
                printf("*");
            }
            else if(row>=n && col>=2*n-a){
                printf("*");
                a++;
            }
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}

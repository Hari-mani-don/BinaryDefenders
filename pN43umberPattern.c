//Number pattern 43

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    int a=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-row;col++){
            if(row%2==0){
                 printf("%d", 2*col);
            }
            else
            {
                 printf("%d", 2*col-1);
            }
           
        }
        printf("\n");
    }
    return 0;
}

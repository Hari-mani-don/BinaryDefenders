//Number Pattern 20
#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            printf("%d",(row+col)-1);
        }
        printf("\n");
    }
    return 0;
    
}

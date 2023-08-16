//Number Pattern 18
#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
    
}

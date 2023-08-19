//Numper pattern 23

#include<stdio.h>
int main(){
    int n, a, b;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    a=n;
    b=b;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(col>=row){
                printf("%d",a);
                
            }
            else{
                printf("%d", b);
                    b--;
                    
                
            }
        }
        printf("\n");
        a--;
        b=n;
    }
    return 0;
}

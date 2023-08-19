//Numper pattern 24

#include<stdio.h>
int main(){
    int n, a=1, b;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=0;row<n;row++){
        a=a+row;
        for(int col=1;col<=n;col++){
            if(a<=n){
                printf("%d",a);
                
            }
            else{
                printf("%d", (n+1)-col);
                    b--;
                    
                
            }
            a++;
        }
        printf("\n");
        a=1;
        
    }
    return 0;
}

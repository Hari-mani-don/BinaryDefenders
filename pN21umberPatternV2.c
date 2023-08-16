//Number Pattern 21
#include<stdio.h>
int main(){
    int n, a=1;
    printf("Input number of Rows: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=0;col<n;col++){
                printf("%-3d", a++);
       
            
        }
    
        printf("\n");
    }
    return 0;
    
}

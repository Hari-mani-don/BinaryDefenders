//Number pattern 46

#include<stdio.h>
int main(){
    int n, a, b=1;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-1;col++){
            a=row;
            a-=b;
            if(col<=row){
                 printf("%d", col);
            }
            else
            {
                 printf("%d", a);
                 b+=1;
            }
           
        }
        b=1;
        printf("\n");
    }
    return 0;
}

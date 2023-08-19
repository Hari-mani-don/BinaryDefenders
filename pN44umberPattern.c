//Number pattern 44

#include<stdio.h>
int main(){
    int n, a, b, c=2;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-1;col++){
            a=2*col-1;
            b=((2*row)-1);
            b-=c;
            if(a<=2*row-1){
                 printf("%d", a);
            }
            else
            {
                 printf("%d", b);
                 c+=2;
            }
           
        }
        c=2;
        printf("\n");
    }
    return 0;
}

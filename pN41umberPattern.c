//Number pattern 41

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    int a=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-row;col++){
            if(a<=n*(n+1)/2 && a%2==1){
                printf("1"); 
            
            }
            else{
                printf("0");
            }
          a++; 
        }
        printf("\n");
    }
    return 0;
}

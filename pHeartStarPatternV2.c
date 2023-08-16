#include<stdio.h>
int main(){
    int n, a, b, c=0, d=1;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    a=n/2 + 2;
    b=n/2;
    for(int row=1;row<=n+3;row++){
        for(int col=1;col<2*n;col++){
            if((row==1 && col<=2) || (row==2 && col<=1)||
               (row==1 && (col>a && col<a+b)) || (row==2 && (col>a+1 && col<=2*(n/2) +1)) || 
                (row==3 &&(col>n-1 && col<n+1)) || (row>4 &&(col<=c)) ){
                    printf(" ");
            }
                else if((row==1 &&(col>2 && col<=a)) || (row==1 && (col>a+b && col<=2*b+a)) ||
                         (row==2 &&(col>1 && col<=a+1)) || (row==2 && (col>(2*n/2)+1 && col<=2*(a+1)+2 ))|| 
                         (row==3 &&(col>=1 && col<=n-1)) || (row==3 && (col>n && col<2*n))){
                             printf("*");
                         }
                else{
                    if(row>3 && col<=2*n-d){
                        printf("*");
                    }
                    else
                      printf(" ");
                }         
        }
        if(row>3){
            d+=2;
            c+=1;
        }
        printf("\n");
    }
    return 0;
}

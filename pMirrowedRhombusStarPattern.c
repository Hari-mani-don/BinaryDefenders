/* Mirrow Rhombus Star patterns version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1+n;j++){
            if(j<i+1){
            printf(" ");
           }
         else{
            printf("*");
         }
        }
        printf("\n");
    }
    return 0;
}

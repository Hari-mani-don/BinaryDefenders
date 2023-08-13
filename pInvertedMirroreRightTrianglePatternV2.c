/*Inverted Mirrore Right Triangle Star Version V2*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=n;k++){
            if(k<i){
                printf(" ");
            }
            else
              printf("*");
        }
        printf("\n");
    }
    return 0;
}

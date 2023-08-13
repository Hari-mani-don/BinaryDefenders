/*Inverted Mirrore Right Triangle Star*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

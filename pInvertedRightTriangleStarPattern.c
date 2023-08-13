/*Inverted Right Triangle Star Pattern*/

#include<stdio.h>
int main(){
    int n;
    printf("Input number of Rows: ");
    scanf("%d", &n);
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<n-rows;col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

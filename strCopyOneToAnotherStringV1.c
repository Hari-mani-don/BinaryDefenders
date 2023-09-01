//String Copy One String To Another String Version V1

#include<stdio.h>
#define SIZE 100
int main(){
    char original[SIZE];
    char copy[SIZE];
    int len=0;
    printf("Enter String Element: ");
    scanf("%[^\n]", original);
    while(original[len]!='\0')len++;
    for(int i=0;i<len;i++){
        copy[i]=original[i];
    }
    printf("Original String: %s\n", original);
    printf("Copy String: %s\n", copy);
}

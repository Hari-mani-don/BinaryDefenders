//String Copy One String To Another String Version V1

#include<stdio.h>
#define SIZE 100
int main(){
    char original[SIZE];
    char copy[SIZE];
    int i=0;
    printf("Enter String Element: ");
    scanf("%[^\n]", original);
    while(original[i]!='\0'){
     copy[i]=original[i];
     i++;
    }
    printf("Original String: %s\n", original);
    printf("Copy String: %s\n", copy);
}

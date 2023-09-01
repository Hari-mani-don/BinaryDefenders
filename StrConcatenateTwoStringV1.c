//String concatenate two strings Version V1

#include<stdio.h>
#define SIZE 100
int main(){
    char original[SIZE];
    char copy[SIZE];
    int i=0,j=-1;
    printf("Enter original String Element: ");
    scanf(" %[^\n]", original);
    printf("Enter copy String Element: ");
    scanf(" %[^\n]", copy);
    printf("Befor Original String: %s\n", original);
    while(original[i]!='\0')i++;
    while(original[i++]=copy[++j]);
    
    
    printf("After Original String: %s\n", original);
}

//Find Length of String Version V1

#include<stdio.h>
#define SIZE 100
int main(){
    char stlen[SIZE];
    int count=0, i=0;
    printf("Enter String: ");
    scanf("%[^\n]", stlen);
    
    while(stlen[i]!='\0'){
        i++;
        count++;
    }
    printf("Length Of a String: %d", count);
}

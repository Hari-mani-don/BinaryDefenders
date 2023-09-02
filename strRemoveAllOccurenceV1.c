//Remove All Occuerence OF Character in a string V1.c

#include<stdio.h>
#define SIZE 100
char removeAllOccurence(char *a, char search);
int main(){
    char b[SIZE];
    char search;
    printf("Enter string: ");
    scanf("%[^\n]", b);
    printf("Search input to remove character: ");
    scanf(" %c", &search);
    printf("Remove First Frequrence Of character: \n");
    removeAllOccurence(b, search);
    return 0;
}
char removeAllOccurence(char *a, char search){
    int j=0;
    while(a[j]!='\0'){
        if(a[j]!=search){
           printf("%c", a[j]);
        }
        j++;
    }
}

//Replace First Occurence of a character in a String Version V1.c

#include<stdio.h>
#define SIZE 100
char replaceChar(char *a, char search, char repl);
int main(){
    char a[SIZE];
    char repl, search;
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input character to replace: ");
    scanf(" %c", &search);
    printf("Input character to replace with : ");
    scanf(" %c", &repl);
    replaceChar(a, search, repl);
    return 0;
}
char replaceChar(char *a, char search, char repl){
    int first=1, i=0;
    char b[SIZE];
    while(a[i]!='\0'){
        if(a[i]==search && first==1){
            printf("%c", a[i]=repl);
            first=0;
        }  
        else{
            printf("%c", a[i]);
        }
        i++;
    }
    
}

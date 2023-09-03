//Replace All Occurence of a character in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void replaceAllChar(char *a, char search, char repl);
int main(){
    char a[SIZE];
    char repl, search;
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input character to replace: ");
    scanf(" %c", &search);
    printf("Input character to replace with : ");
    scanf(" %c", &repl);
    printf("String After Replacing Last Occurence of A character: ");
    replaceAllChar(a, search, repl);
    return 0;
}
void replaceAllChar(char *a, char search, char repl){
    int i=0, last=0, le=-1;
    while(a[++le] != '\0') { 
         if(a[le] == search)
            last++;

    }
    
    if(last>0){
       while(a[i]!='\0'){
        if(a[i]==search ){
            printf("%c", a[i]=repl);
        }  
        else{
                printf("%c", a[i]);
        }
        i++;
     }
    }
    else
    {
        printf("'%c' is not foundend int this string ", search);
    }
    
}

//Find first Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void findWord(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    char repl, search;
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    findWord(a, b);
    return 0;
}
void findWord(char *a, char *b){
   
    int i=0, len=0, count=0, index=-1;
    while(b[len] != '\0') len++;
    while(a[i]!='\0'){
      if(a[i]==b[0]){
          index=i;
          int k=i, j=0;
          count=0;
            while(b[j]!='\0'){
                if(a[k]==b[j]){
                 count++;
                 k++;
                 j++;
                }  
            }
        }
        
        if(count==len){
            printf("'%s' is found at index of %d", b, index);
            break;
        }
        i++;
    }
    
    if(count!=len){
        printf("'%s' is not foundend in this string ", b);
    }
}

//Find Total Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void TotalOccuWord(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    char repl, search;
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    TotalOccuWord(a, b);
    return 0;
}
void TotalOccuWord(char *a, char *b){
   
    int i=0, len=0, lastWord=0, d=0;
    while(b[len] != '\0') len++;
     while(a[i]!='\0'){
         if(a[i]==b[0]){
          int k=i, j=0;
            while(b[j]!='\0'){
                if(a[k]==b[j]){
                 k++;
                 j++;
                }  
                if(j==len){
                    d++;
                }
            }
        }
        i++;
     }
    if(d>0){
        printf("Total Occurence of word '%s': %d\n", b, d);
    }
    else{
        printf("'%s' is not foundend in this string\n", b);
    }
    
}

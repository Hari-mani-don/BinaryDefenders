//Remove Firest Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void TotalOccuWord(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    printf("Remove First Occurence of word :");
    TotalOccuWord(a, b);
    return 0;
}
void TotalOccuWord(char *a, char *b){
   
    int i=0, len=0, lastWord=0,found=1;
    while(b[len] != '\0') len++;
    len--;
     while(a[i]!='\0'){
         if(a[i]==b[0]){
          int k=i, j=0;
            while(b[j]!='\0'){
                if(a[k]==b[j] && found==1){
                    if(j==len){
                    found=0;
                    i=i+j+1;
                  }
                 k++;
                }  
                j++;
            }
        }
         printf("%c",a[i]);
        i++;
     }
}

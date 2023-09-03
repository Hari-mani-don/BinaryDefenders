//Search All Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void AllOccurence(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    AllOccurence(a, b);
    return 0;
}
void AllOccurence(char *a, char *b){
   
    int i=0, j=0, len=0, lastWord=0,found=1, index=-1;
    while(b[len] != '\0') len++;
  
     while(a[i]!='\0'){
         if(a[i]==b[0]){
             index=i;
          int k=i;
          j=0;
            while(b[j]!='\0'){
                if(a[k]==b[j]){
                 k++; 
                }
                 j++;
            } 
                if(j==len){
                    printf("'%s' is found at index of %d\n", b, index);
                }
                
            }
           i++;
            
    }
    if(j!=len){
        printf("'%s' is not available in this string\n", b);
    }
          
        
 }

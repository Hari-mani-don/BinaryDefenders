//Find last Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void findLastWord(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    char repl, search;
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    findLastWord(a, b);
    return 0;
}
void findLastWord(char *a, char *b){
   
    int i=0, len=0, count=0, lastWord=0, index=-1;
    while(b[len] != '\0') len++;
    int l=0,m=0, n=0,d=0;
   while(a[l]!='\0'){
      if(a[l]==b[0]){
          m=l;
         while(b[n]==a[m]){
                 m++;
                 n++;
        } 
        if(len==n){
        d++; //count word
         }
     }
      l++;
   }
            
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
                if(count==len){
                    lastWord++;
                }
            }
        }
        
        if(count==len && lastWord==d){
            printf("'%s' is found at index of %d", b, index);
            break;
        }
        i++;
    }
    
    if(count!=len && lastWord==0){
        printf("'%s' is not foundend in this string ", b);
    }
    
}

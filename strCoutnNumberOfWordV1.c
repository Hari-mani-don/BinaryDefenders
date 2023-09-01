//String  count number of words in a string Version V2

#include<stdio.h>
#define SIZE 100
char wordCount(char *str);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    wordCount(str1);
  return 0;
}

char wordCount(char *str){
   int count=0, i=0, pre='\0';
   while(1){
       if(str[i]==' ' || str[i]=='\0' || str[i]=='\t' ||str[i]=='\n') {
           if (pre!=' ' && pre!='\0' && pre!='\n' && pre!='\t'){
             count++;
             }
        } 
       
       pre=str[i];
       
       if(str[i]=='\0'){
           break;
       }
       else{
           i++;
       }
   }
   printf("The word is %d", count);
}

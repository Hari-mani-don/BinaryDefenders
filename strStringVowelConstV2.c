//String count total number of vowels and consonants in a string Version V2

#include<stdio.h>
#define SIZE 100
char vowelConst(char *str);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    vowelConst(str1);
  return 0;
}

char vowelConst(char *str){
   int i=0, vowel=0, cons=0;
   while(*str){
       if((*str>='A' && *str<='Z' || *str>='a' && *str<='z') && (*str=='a'|| *str=='A'|| *str=='e'|| 
       *str=='E'|| *str=='i'|| *str=='I'|| *str=='o'|| *str=='O'|| *str=='u'|| *str=='U')){
           vowel++;
           
       }
       else{
           if((*str>='A' && *str<='Z' || *str>='a' && *str<='z')){
               cons++;
           }
           
       }
       *str++;
   }
   printf("vowel: %d\n", vowel);
   printf("Const : %d\n", cons);
   
    
}

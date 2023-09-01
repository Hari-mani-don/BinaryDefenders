//String count total number of vowels and consonants in a string Version V1

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
   while(str[i]!='\0'){
       if((str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z') && (str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| 
       str[i]=='E'|| str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U')){
           vowel++;
           
       }
       else{
           if((str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')){
               cons++;
           }
           
       }
       i++;
   }
   printf("vowel: %d\n", vowel);
   printf("Const : %d\n", cons);
   
    
}

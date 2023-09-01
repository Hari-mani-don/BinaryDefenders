//String find total number of alphabets, digits or special characters in a string Version V1

#include<stdio.h>
#define SIZE 100
char alphDigitSpeci(char *str);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    alphDigitSpeci(str1);
  return 0;
}

char alphDigitSpeci(char *str){
   int i=0, alphabet=0, isDigit=0, isSpecial=0;
   while(str[i]!='\0'){
       if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
           alphabet++;
           i++;
       }
       else if(str[i]>='0' && str[i]<='9'){
           isDigit++;
           i++;
       }
       else{
           isSpecial++;
           i++;
       }
   }
   printf("Alphabet: %d\n", alphabet);
   printf("Digit : %\n", isDigit);
   printf("Special : %d\n", isSpecial);
    
}

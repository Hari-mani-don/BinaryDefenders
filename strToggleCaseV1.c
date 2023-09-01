//String toggle case of each character in a string Version V1

#include<stdio.h>
#define SIZE 100
char toggleCase(char *str);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    toggleCase(str1);
  return 0;
}

char toggleCase(char *str){
   int i=0;
   while(str[i]!='\0'){
       if(str[i]>='A' && str[i]<='Z'){
           printf("%c", str[i]+32);
           i++;
       }
       else if(str[i]>='a' && str[i]<='z'){
           printf("%c", str[i]-32);
           i++;
       }
       else{
           printf("%c", str[i]);
           i++;
       }
   }
    
}

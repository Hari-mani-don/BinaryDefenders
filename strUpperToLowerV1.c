//String Upper To Lower Case Version V1

#include<stdio.h>
#define SIZE 100
char upperTolower(char *str);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    upperTolower(str1);
  return 0;
}

char upperTolower(char *str){
   int i=0;
   while(str[i]!='\0'){
       if(str[i]>='A' && str[i]<='Z'){
           printf("%c", str[i]+32);
           i++;
       }
       else{
           printf("%c", str[i]);
           i++;
       }
   }
    
}

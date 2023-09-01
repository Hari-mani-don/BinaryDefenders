//String Revers of String Version V2

#include<stdio.h>
#define SIZE 100
char reverse(char str[]);
int main(){
    char str1[SIZE];
    printf("Enter str1 Element: ");
    scanf("%[^\n]",str1);
    
    reverse(str1);
  return 0;
}

char reverse(char str[]){
    int i=0;
   while(str[i])i++;
   
   for(int j=i;j>=0;j--){
       printf("%c", str[j]);
   }
}

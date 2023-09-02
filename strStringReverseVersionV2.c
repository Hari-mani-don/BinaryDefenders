//String Reverse Version V2

#include<stdio.h>
#define SIZE 100
int main(){
    char a[SIZE];
    char *b=a;
    int i=0;
    printf("Enter string: ");
    scanf("%[^\n]", a);
    while(*(++b)!='\0')i++;
    
   while(i>=0){
       printf("%c", *(--b));
       i--;
   }
    
    return 0;
}
    

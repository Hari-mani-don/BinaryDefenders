//copy string V1

#include<stdio.h>
#define SIZE 100


int main(){
    char original[SIZE];
    char copy[SIZE];
    char *ptr=original;
    char *ptr2=copy;
    
    
    printf("Enter the string: ");
    scanf("%[^\n]", ptr);
    
    //copy string
    while(*(ptr)!='\0') *(ptr2++)=*(ptr++);
    
    
    printf("original string: %s\n",original);
    printf("copy of string: %s", copy);
    
    
   return 0;
}

//concatenatestring V1

#include<stdio.h>
#define SIZE 100


int main(){
    char original[SIZE];
    char copy[SIZE];
    char *ptr=original;
    char *ptr2=copy;
    
    
    printf("Enter the string: ");
    scanf(" %99[^\n]", ptr);
    printf("Enter the string: ");
    scanf(" %99[^\n]", ptr2);
    
    
    while(*(++ptr)!='\0');
    //copy string
    while(*(ptr++)=*(ptr2++));
    
    
    printf("original string: %s\n",original);
    printf("copy of string: %s\n", copy);
    
    //concatenate Two string
    printf("concatenate of string: %s\n",original);
   
    
    
   return 0;
}

//Reverse of a String V1

#include<stdio.h>
#define SIZE 100


int main(){
    char reverse[SIZE];
    char *ptr=reverse;
    
    printf("Enter the string: ");
    scanf(" %99[^\n]", ptr);
    
    printf("Before reverse string:%s\n", reverse);
    
    int i=0;
    //reverse
    while(*(ptr+i)!='\0')i++;
    
    
    i--;
    
    
    printf("After reverse string: ");
    while(i>=0){
        printf("%c", *(ptr+i));
        i--;
    }
    
    
   return 0;
}

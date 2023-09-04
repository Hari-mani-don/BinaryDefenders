#include<stdio.h>
#define SIZE 100


int main(){
    char str[SIZE];
    char *ptr=str;
    int count=0;
    
    
    printf("Enter the string: ");
    scanf("%[^\n]", ptr);
    
    //Lenght find it 
    while(*(ptr++)!='\0') count++;
    
    
    printf("Lenght of the string: %d",count);
    
    
   return 0;
}

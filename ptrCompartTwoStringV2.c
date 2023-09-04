//Compare String V1

#include<stdio.h>
#define SIZE 100


int main(){
    char original[SIZE];
    char copy[SIZE];
    char *ptr=original;
    char *ptr2=copy;
    int found=1;
    
    printf("Enter the string: ");
    scanf(" %99[^\n]", ptr);
    printf("Enter the string: ");
    scanf(" %99[^\n]", ptr2);
    
    //compare
    while(*(ptr)!='\0' && *(ptr)==*(ptr)){
      ptr++;
      ptr2++;
    }
    
    //check equal or not
    if(*ptr=='\0' && *ptr2=='\0'){
        printf("Both string are equal");
    }
    else{
        printf("not Equal");
    }
    
    
   return 0;
}

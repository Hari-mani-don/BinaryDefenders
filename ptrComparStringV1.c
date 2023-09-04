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
    while(*(++ptr)!=*(ptr2++))found=0;
    
    //check equal or not
    if(found==1){
        printf("Both string are equal");
    }
    else{
        printf("not Equal");
    }
    
    
   return 0;
}

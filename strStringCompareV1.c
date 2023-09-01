//String Compare Version V1

#include<stdio.h>
#define SIZE 100
int strCompare(char *str1, char *str2);
int main(){
    char str1[SIZE];
    char str2[SIZE];
    
    printf("Enter str1 Element: ");
    scanf(" %[^\n]",str1);
    printf("Enter Str2 Element: ");
    scanf(" %[^\n]",str2);
    
    strCompare(str1, str2);
  return 0;
}

int strCompare(char *str1, char *str2){
    int i=0, j=0;
    while(str1[i]!='\0')i++;
     while(str2[j]!='\0')j++;
     if(i==j){
         int st=1;
         for(int k=0;k<j;k++){
             
             if(str1[k]!=str2[k]){
                 st=0;
             }
         }
        if(st==1){
        printf("Both string are equal\n");
          }
    
        else{
        printf("Both string not  equal\n");
         }
         
    }
    else{
        printf("Both string not  equal\n");
         }

    
}

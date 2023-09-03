//Total  Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void TotalOccurence(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
  TotalOccurence(a, b);
    return 0;
}
void TotalOccurence(char *a, char *b){
   
    int i=0, j=0, len=0, d=0, c=0;
    while(b[len] != '\0') len++;
    
     while(a[i]!='\0'){
         if(a[i]==b[0]){
             int k=i;
              c=0, j=0;
            while(b[c]!='\0'){
                if(a[k]==b[j]){
                  k++; 
                  j++;
                }
                 c++;
            }
            if(j==len){
               d++;
            }
        }
          i++;
            
    }
    
    if(c==len){
        printf("Total Occurence of '%s' :  %d\n", b, d);
    }
    else{
        printf("'%s' is not available in this string\n", b);
    }
          
        
 }

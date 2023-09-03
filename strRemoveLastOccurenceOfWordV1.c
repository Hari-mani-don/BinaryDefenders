//Remove last Occurence of a word in a String Version V1.c

#include<stdio.h>
#define SIZE 100
void TotalOccuWord(char *a, char *b);
int main(){
    char a[SIZE];
    char b[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    printf("Input word to find: ");
    scanf(" %[^\n]", b);
    printf("Remove First Occurence of word :");
    TotalOccuWord(a, b);
    return 0;
}
void TotalOccuWord(char *a, char *b){
   
    int i=0, len=0, lastWord=0,found=1;
    while(b[len] != '\0') len++;
    int h=0, z=0, e=0;
     while(a[h]!='\0'){
         if(a[h]==b[0]){
          int g=h;
           e=0;
            while(b[e]!='\0'){
                if(a[g]==b[e]){
                 g++;
                }  
                e++;
            }
            if(e==len){
                   z++;//count word
                  }
        }
        h++;
     }
        
        
     while(a[i]!='\0'){
         if(a[i]==b[0]){
          int k=i, j=0;
            while(b[j]!='\0'){
                if(a[k]==b[j]){
                   if(found==z){
                    i=i+j;
                  }
                }
                j++;
                 k++;
            } 
                if(j==len){
                    found++;
                }
                
            }
            printf("%c",a[i]);
            i++;
            
        }
          
        
 }

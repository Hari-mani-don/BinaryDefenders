//Remove All Occurence of a word in a String Version V1.c

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
   
    int i=0, j=0, len=0, d=0, c=0, found=1;
    while(b[len] != '\0') len++;
    int l=0, m=0, n=0, o=0, p=0;
    while(a[l]!='\0'){
         if(a[l]==b[0]){
             m=l, n=0;
            while(b[n]!='\0'){
                if(a[m]==b[n]){
                  m++; 
                  o++;
                }
                 n++;
            }
            if(o==len){
               p++;
            }
            
        }
        l++;
    }
    if(p>0){
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
               i=i+j;
               found=0;
            }
            
        }
             printf("%c", a[i]);
          i++;
            
     }
    }
   if(c!=len && found==1){
         printf("'%s' is not available in this string\n", b);
         }
    
    
 }

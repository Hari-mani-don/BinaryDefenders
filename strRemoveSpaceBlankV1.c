// remove spaces, blanks from a string  Version V1.c

#include<stdio.h>
#define SIZE 100
void trimtialingWhiteSpace(char *a);
void trimLeadingWhiteSpace(char *a);
void blankWhitespace(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    
   printf("before trim : '%s'\n", a);
  blankWhitespace(a);
  trimtialingWhiteSpace(a);
 trimLeadingWhiteSpace(a);
  printf("After trim : '%s'", a);
    return 0;
}
void blankWhitespace(char *a){
    int i=0, j=0, spaceFlag=0;
     for(i=0;a[i]!='\0';i++){
         if(a[i]==' '){
            if(!spaceFlag){
                a[j]=' ';
                spaceFlag=1;
                j++;
            }
         }
         else{
             if(a[i]!=' '){
             a[j]=a[i];
             j++;
             spaceFlag=0;
             }
         }
     }
     a[j]='\0';
 }
void trimtialingWhiteSpace(char *a){
   
    int i=0, index=-1;

        while(a[i]!='\0'){
            if(a[i]!=' ' && a[i]!='\t' && a[i]!='\n'){
              index=i;
            }
          i++;
           
        }
    a[index+1]='\0';

 }
 
 void trimLeadingWhiteSpace(char *a){
   
    int i=0, index=0;

        while(a[index]==' ' || a[index]=='\0' || a[index]=='\t' || a[index]=='\n'){
           index++;
        }
        i=0;
        while(a[i+index]!='\0'){
            a[i]=a[index + i];
            i++;
        }
        a[i]='\0';
 }

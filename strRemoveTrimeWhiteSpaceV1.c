//To trim white space of a String Version V1.c

#include<stdio.h>
#define SIZE 100
void trimLeadingWhiteSpace(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    
   
  trimLeadingWhiteSpace(a);
    return 0;
}
void trimLeadingWhiteSpace(char *a){
   
    int found=1, i=0;
    if(a[i]==' '){
        while(a[i]!='\0'){
            if(a[i]!=' ' && found==1){
              //
            }
            else{
                found=0;
              printf("%c", a[i]);
            }
            i++;
        }
    }
    else
      printf("Not Available for white space");
  
 }

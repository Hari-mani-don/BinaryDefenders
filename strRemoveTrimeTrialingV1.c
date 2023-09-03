//Remove To trim trialing white space of a String Version V1.c

#include<stdio.h>
#define SIZE 100
void trimLeadingWhiteSpace(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    
   
  trimLeadingWhiteSpace(a);
  printf("if space is found their are print output not space found output not print\n");
  printf("trim: %s", a);
    return 0;
}
void trimLeadingWhiteSpace(char *a){
   
    int found=1, i=0, len;
    while(a[len]!='\0')len++;
    len--;
    i=len;
        while(a[len]!='\0'){
            if(a[i]==' ' && found==1){
              a[i]='\0';
            }
            else{
                found=0;
            }
            i--;
        }
    a[len];
 }

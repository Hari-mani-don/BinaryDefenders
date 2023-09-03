//Remove To trim trialing white space of a String Version V2.c

#include<stdio.h>
#define SIZE 100
void trimLeadingWhiteSpace(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    
   printf("before trim : '%s'\n", a);
  trimLeadingWhiteSpace(a);
  printf("After trim : '%s'", a);
    return 0;
}
void trimLeadingWhiteSpace(char *a){
   
    int i=0, index=-1;

        while(a[i]!='\0'){
            if(a[i]!=' ' && a[i]!='\t' && a[i]!='\n'){
              index=i;
            }
           i++;
           
        }
    a[index+1]='\0';

 }

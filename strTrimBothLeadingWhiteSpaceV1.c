// trim  both leading and trialing white space of a String Version V1.c

#include<stdio.h>
#define SIZE 100
void trimtialingWhiteSpace(char *a);
void trimLeadingWhiteSpace(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    
   printf("before trim : '%s'\n", a);
  trimtialingWhiteSpace(a);
  trimLeadingWhiteSpace(a);
  printf("After trim : '%s'", a);
    return 0;
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

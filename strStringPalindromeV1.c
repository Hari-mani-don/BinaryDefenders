//String check palindrome Version V1

#include<stdio.h>
#define SIZE 100
char reverse(char a[]);
int main(){
    char a[SIZE];
    printf("Enter string: ");
    scanf("%[^\n]", a);
    reverse(a);
    
    return 0;
}

char reverse(char a[]){
    int i=0, j;
         char b[SIZE];
         char *c=b;
        while(*(++a)!='\0')i++;
          j=i;
        while(i>=0){
          *(c++)=*(--a);
           i--;
        }
        int l=1;
        while(j>=0){
            int k=0;
            if(a[k]!=b[k]){
              l=0;
            }
         k++;      
         j--;
       }
       if(l==1){
           printf("palindrome");
       }
       else
           printf("not palindrome");
} 

          
   

    

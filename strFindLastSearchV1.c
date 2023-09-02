//find the last occurrence of a character in a string

#include<stdio.h>
#define SIZE 100
char searchLast(char *a, char sear);
int main(){
    char a[SIZE];
    char sear;
    printf("Enter string: ");
    scanf("%[^\n]", a);
    printf("Enter search element: ");
    scanf(" %c", &sear);
    searchLast(a, sear);
    return 0;
}
char searchLast(char *a, char sear){
    int sea=1,i=0;
   
        while(a[i]!='\0')i++;
        i--;
        while(i>=0){
          if(a[i]==sear){
           sea=0;
           break;
           }
           i--;
        }
     if(sea==0){
            printf("'%c' is found at index of %d",sear, i);
          
        }
        else
        {
          printf("'%c' is not available in the string", sear);  
        }
}

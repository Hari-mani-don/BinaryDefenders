//find the first occurrence of a character in a string

#include<stdio.h>
#define SIZE 100
char search(char *a, char sear);
int main(){
    char a[SIZE];
    char sear;
    printf("Enter string: ");
    scanf("%[^\n]", a);
    printf("Enter search element: ");
    scanf(" %c", &sear);
    search(a, sear);
    return 0;
}
char search(char *a, char sear){
    int sea=1,i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==sear){
           sea=0;
           break;
        }
    }
     if(sea==0){
            printf("'%c' is found at index of %d",sear, i);
          
        }
        else
        {
          printf("'%c' is not available in the string", sear);  
        }
}

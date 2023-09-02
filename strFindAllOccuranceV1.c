//find the find all occurrence of a character in a string

#include<stdio.h>
#define SIZE 100
char searchAll(char *a, char sear);
int main(){
    char a[SIZE];
    char sear;
    printf("Enter string: ");
    scanf("%[^\n]", a);
    printf("Enter search element: ");
    scanf(" %c", &sear);
    searchAll(a, sear);
    return 0;
}
char searchAll(char *a, char sear){
    int sea=1,i=-1, j=0;

        while(a[i]!='\0' && a[i]==sear){
            sea=0;
            printf("'%c' found at index of: ", sear);
            i++;
            break;
        }
        while(a[j]!='\0'){
        if(a[j]==sear && sea==0){
            printf("%d, ", j);
        }
        else{
            if(sea==1){
                printf("'%c' is not available for this string",sear);
            }
        }
        j++;
        }
        
}

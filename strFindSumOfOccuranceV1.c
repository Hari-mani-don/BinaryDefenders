//find the sum of occurrence of a sting V1.c

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
    int sea=1,i=-1, j=0, sum=0;

        while(a[i]!='\0' && a[i]==sear){
            sea=0;
            i++;
            break;
        }
        while(a[j]!='\0'){
            if(a[j]==sear && sea==0){
            sum+=1;
            
            }
        j++;
        }
        printf("sum of occurrence: %d", sum);
        
}

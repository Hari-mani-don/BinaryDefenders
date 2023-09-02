//Remove First Frequrence in a string V1.c

#include<stdio.h>
#define SIZE 100
char removeFirestFrequence(char *a, char search);
int main(){
    char b[SIZE];
    char search;
    printf("Enter string: ");
    scanf("%[^\n]", b);
    printf("Search input to remove character: ");
    scanf(" %c", &search);
    printf("Remove First Frequrence Of character: \n");
    removeFirestFrequence(b, search);
    return 0;
}
char removeFirestFrequence(char *a, char search){
    int i=0,se=1;
    while(a[i]!='\0'){
        if(a[i]==search && se==1){
            se=0;
        }
        else{
            printf("%c", a[i]);
        }
        i++;
    }
}

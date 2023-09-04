//read data frome file content

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *file;
    char str[SIZE];
    int ch;
    file=fopen("example.txt", "r");
    if(file==NULL){
        printf("File creation failed.\n");
    }
    while((ch=fgetc(file))!=EOF){
        printf("%c", ch);
    }
    fclose(file);
    
    printf("read successfully");
    return 0;
}

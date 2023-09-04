//read data frome file content

#include<stdio.h>
#include<string.h>
#define SIZE 1000
int main(){
    FILE *file;
    char str[SIZE];
    int read=0;
    file=fopen("example.txt", "r");
    if(file==NULL){
        printf("File creation failed.\n");
        return 1;
    }
    while(fgets(str,SIZE, file)!=NULL){
        read=strlen(str);
        str[read-1]=str[read-1]=='\n'?'\0':str[read-1];
        
        printf("%s\n", str);
    }
    fclose(file);
    
    printf("\nread successfully");
    return 0;
}

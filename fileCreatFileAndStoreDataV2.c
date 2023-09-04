//creat file and store some content

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *file;
    char str[SIZE];
    file=fopen("example.txt", "w");
    if(file==NULL){
        printf("File creation failed.\n");
    }
    printf("Enter string: ");
    scanf("%[^\n]", str);
    
    fprintf(file, "%s", str);
    fclose(file);
    
    printf("File create and data store in successfully");
    return 0;
}

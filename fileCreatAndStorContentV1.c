//creat file and store some content

#include<stdio.h>
int main(){
    FILE *file;
    file=fopen("example.txt", "w");
    if(file==NULL){
        printf("File creation failed.\n");
    }
    fprintf(file, "Hi, I am HariMani :)\nI know english and I am Millionaire.\n");
    fclose(file);
    return 0;
}

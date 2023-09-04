//File read and append a file

#include<stdio.h>
#include<stdlib.h>
void readfile(FILE *file);
#define SIZE 1000
int main(){
    FILE *file;
    char data[SIZE];
   
   file=fopen("data.txt", "a");
   
   if(file==NULL){
       printf("Error file");
       return 1;
   }
     printf("Enter to add the content in file : ");
     scanf("%[^\n]", data);
     
    fprintf(file, " %s ", data);
    fclose(file);
    
    file=fopen("data.txt", "r");
    readfile(file);

    fclose(file);
    

    printf("\nSuccessfull Read and append a File");
    return 0;
}
void readfile(FILE *file){
    int ch;
  while((ch=fgetc(file))!=EOF){
      putchar(ch);
  }   
}

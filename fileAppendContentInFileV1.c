//File read and append a file

#include<stdio.h>
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
     
     fprintf(file, "\n%s", data);

    fclose(file);
    

    printf("Successfull Read and append a File");
    return 0;
}

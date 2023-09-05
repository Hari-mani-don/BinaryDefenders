//copy one file To store another file

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *file,
         *data;
    char a[SIZE];   

    char *ptr=a;
    file=fopen("file.txt", "r");
    data=fopen("data.txt", "w");
    if(file==NULL){
        printf("Error! Not found");
        return 1;
    }
    //read from file
    while(fgets(a,SIZE,file)!=NULL){
        fprintf(data,"%s", a);
    }
    
    
    fclose(file);
    fclose(data);
    return 0;
}

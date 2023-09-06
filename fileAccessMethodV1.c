#include<stdio.h>
int main(){
    FILE *file;
    char path[100]="harima.txt";
    file=fopen(path,"r");
    if(file!=NULL){
        printf("%s, exists", path);
    }else{
        printf("%s does not exitsts", path);
    }
    fclose(file);
    return 0;
}

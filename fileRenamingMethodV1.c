#include<stdio.h>

int main(){
    const char *oldName="done.c";
    const char *newName="hariDone.c";

    if(rename(oldName, newName)==0){
        printf("File renamed Successfully.\n");
    }else{
        printf("Error renaming File");
        return 1;
    }
    
    return 0;
}

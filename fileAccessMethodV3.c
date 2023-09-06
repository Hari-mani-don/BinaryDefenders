#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
    const char path[100]="harimani.txt";
    struct stat hari;
    if(stat(path, &hari)==0){
        printf("%s, exists", path);
    }else{
        printf("%s does not exitsts", path);
    }

    return 0;
}

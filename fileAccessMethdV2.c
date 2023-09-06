#include<stdio.h>
#include<unistd.h>
int main(){
    const char path[100]="harima.txt";

    if(access(path, F_OK)==0){
        printf("%s, exists", path);
    }else{
        printf("%s does not exitsts", path);
    }

    return 0;
}

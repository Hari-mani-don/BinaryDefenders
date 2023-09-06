#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
int main(){
    DIR *dir=opendir("C:\\Users\\Admin\\Desktop\\portfolioSample\\portfolioProject");
    const struct dirent *dp;
    if(!dir){
        return 1;
    }
    while((dp=readdir(dir))!=NULL){
        printf("%s\n", dp->d_name);
    }
    closedir(dir);
  
    return 0;
}

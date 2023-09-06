#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<dirent.h>
void recurse(char *basepath);
int main(){
    char *basepath="C:\\Users\\Admin\\Downloads";
    recurse(basepath);
  
    return 0;
}
void recurse(char *basepath){
   char path[1000];
    const struct dirent *dp;
    DIR *dir=opendir(basepath);
    if(!dir){
        return;
    }
    while((dp=readdir(dir))!=NULL){
        if(strcmp(dp->d_name,".")!=0 && strcmp(dp->d_name,"..")!=0){
        printf("%s\n", dp->d_name);
        strcpy(path,basepath);
        strcat(path, "/");
        strcat(path,dp->d_name);
        
        recurse(path);
        }
        
    }
    closedir(dir);
}

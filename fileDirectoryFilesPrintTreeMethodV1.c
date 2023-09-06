#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<dirent.h>
void recurse(char *basepath, const int root);
int main(){
    char *basepath="C:\\Users\\Admin\\Downloads";
    recurse(basepath, 0);
  
    return 0;
}
void recurse(char *basepath, const int root){
   char path[1000];
    const struct dirent *dp;
    DIR *dir=opendir(basepath);
    if(!dir){
        return;
    }
    while((dp=readdir(dir))!=NULL){
        if(strcmp(dp->d_name,".")!=0 && strcmp(dp->d_name,"..")!=0){

        for(int i=0;i<root;i++){
            if(i%2==0 || i==0){
                printf("%c", 179);
            }else{
                printf(" ");
            }
        }

        printf("%c%c%s\n",195,196, dp->d_name);
        strcpy(path,basepath);
        strcat(path, "/");
        strcat(path,dp->d_name);
        
        recurse(path, root+2);
        }
        
    }
    closedir(dir);
}

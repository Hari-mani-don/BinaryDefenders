#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
    const char *path="hari";
    
    if(access(path, F_OK)==0){
        printf("%s, exists\n", path);
        struct stat dir_info;
        if(stat(path,&dir_info)==0){
            if(S_ISDIR(dir_info.st_mode)){
                printf("%s is a directory.\n", path);
            }else{
                printf("%s is not directory.\n", path);
            }
        }else{
            printf("Error checking directory type\n");
        }
    }else{
        printf("%s does not exitsts or is not accessible.\n", path);
    }

    return 0;
}

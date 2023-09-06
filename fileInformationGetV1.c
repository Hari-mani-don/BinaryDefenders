#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
void permmisions(struct stat file_info);
void printFileInformation(struct stat file_info);
int main(){
    const char *filename="hariMani.txt";
    struct stat file_info;

    if(stat(filename, &file_info)==0){
        printf("File Information for: %s\n", filename);
        printFileInformation(file_info);
        printf("File Permissions: " );
        permmisions(file_info);
        printf("\nLast Acccess Time: %s\n", ctime(&file_info.st_atime));
        printf("Last Modification Time: %s\n", ctime(&file_info.st_mtime));
        printf("Last Status Change Time: %s\n", ctime(&file_info.st_ctime));
    }else{
        perror("Error reading file information");
        return 1;
    }

    return 0;
}

void printFileInformation(struct stat file_info){
    printf("File Size: %lld bytes\n", (long long)file_info.st_size);
    printf("\nNumber of Hard Links: %lu\n",(unsigned long) file_info.st_nlink);
    printf("Owner UID: %u\n",file_info.st_uid);
    printf("Owner GID: %u\n", file_info.st_gid);
   
}
void permmisions(struct stat file_info){
    if(file_info.st_mode & R_OK)
        printf("read ");
    if(file_info.st_mode & W_OK);
        printf("write ");
    if(file_info.st_mode & X_OK);        
}

//count characters, words and lines in a text  file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani,
         *duplicate;
    char a[SIZE];
    char b[SIZE];
    char path[SIZE];
    int line=0;
    char c;

    printf("Enter file Path: ");
    scanf("%[^\n]",path);
    printf("Enter line to remove in file: ");
    scanf(" %d",&line);
    
    
    //file open
    duplicate=fopen("duplicate.txt", "w");
    harimani=fopen(path, "r");
    
    //file check opening
    if(harimani==NULL || duplicate==NULL){
        printf("Error! Not found");
        return 1;
    }
    
    while(fgets(a, SIZE, harimani)!=NULL){
        fprintf(duplicate, "%s", a);
    }
    
    fclose(harimani);
    fclose(duplicate);
    
    
    FILE *duplicate_f=fopen("duplicate.txt", "r");
    harimani=fopen(path, "w");
    

    //read from file
    int count=0;
    while(fgets(b,SIZE,duplicate_f)!=NULL){
        count++;
        if(count!=line){
            fprintf(harimani, "%s",b);
        }
   
    }
    if(count<line){
        printf("Entered outof line\n");
    }
    
    fclose(harimani);
    fclose(duplicate);//file close
    
     if(remove("duplicate.txt")==0){
         printf("Successfull remove\n");
     }else{
         printf("not remove\n");
     }
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

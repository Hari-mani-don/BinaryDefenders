//count characters, words and lines in a text  file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani,
         *duplicate;
    char a[SIZE];
    char b[SIZE];
    char path[SIZE];

    printf("Enter file Path: ");
    scanf("%[^\n]",path);
   
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
    

    while(fgets(b,SIZE,duplicate_f)!=NULL){
        int found=1, i=0;
        while(b[i]!='\0'){
            if(b[i]!='\n' && b[i]!='\t' && b[i]!='\0' && b[i]!=' '){
                found=0;
            }
            i++;
        }
        if(found==0){
            fprintf(harimani, "%s",b);
        }
        else{
            //
        }
   
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

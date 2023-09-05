//count characters, words and lines in a text  file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani,
         *duplicate;
    char a[SIZE];
    char b[SIZE];
    char path[SIZE];
    char word[SIZE];
    char c;
    int len=0, i=0;
    printf("Enter file Path: ");
    scanf("%[^\n]",path);
    printf("Enter word to remove in file: ");
    scanf(" %[^\n]",word);
    
    //Find word length
    while(word[len]!='\0')len++;
    
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
    
    duplicate=fopen("duplicate.txt", "r");
    harimani=fopen(path, "w");
    

    //read from file
    while(fscanf(duplicate,"%s",b)!=EOF){
        
        int wo=0, found=0, z=0;
        while(a[z]!='\0')z++;
        if(b[0]==word[0]){
            int j=0;
            while(word[j]!='\0'){
                if(b[j]==word[j]){
                    wo++;
                    j++;
                }
                else{
                    break;
                }
            }
            if(len==wo){
              found=1;
             }
        }
       
        if(found==1){
            //
        }
        else{
            fprintf(harimani,"%s", b);
            fprintf(harimani, " ");
        }
        
       
    }
    fclose(harimani);
    fclose(duplicate);//file close
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

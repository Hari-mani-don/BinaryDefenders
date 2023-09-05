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
    
    
    FILE *duplicate_f=fopen("duplicate.txt", "r");
    harimani=fopen(path, "w");
    

    //read from file
    while(fgets(b,SIZE,duplicate_f)!=NULL){
        
        int z=0;
        while(b[z]!='\0'){
            int  found=1;
          if(b[z]==word[0]){
            int j=0, wo=0;
            int k=z;
            while(word[j]!='\0'){
                if(b[k]==word[j]){
                    wo++;
                    j++;
                    k++;
                }
                else{
                    break;
                }
            }
            if(len==wo){
              z=z+len;
              fprintf(harimani,"%c", b[z]);
              found=0;
             }
          }
          
          if(found==1){
                 fprintf(harimani, "%c", b[z]);
             }
             z++;
        }
    
       
    }
   
   
    fclose(harimani);
    fclose(duplicate);//file close
    
     if(remove("duplicate.txt")==0){
         printf("nSuccessfull remove");
     }else{
         printf("not remove");
     }
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

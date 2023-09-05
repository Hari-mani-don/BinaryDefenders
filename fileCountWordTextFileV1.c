//count characters, words and lines in a text  file

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani;
    char a; 
    int word=1, cha=0, line=1, found=0;
    harimani=fopen("HariMani:).txt", "r");
    if(harimani==NULL){
        printf("Error! Not found");
        return 1;
    }
    //read from file
    while((a=fgetc(harimani))!=EOF){
        cha++;
        if(a=='\n' || a==' '){
            word+=1;
        }
        if(a=='\n'){
            line+=1;
        }
        a++;
        found=1;
    }
    if(found==1){
    printf("character: %d\n", cha);
    printf("word: %d\n", word);
    printf("line: %d\n", line);
    }

    fclose(harimani);
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

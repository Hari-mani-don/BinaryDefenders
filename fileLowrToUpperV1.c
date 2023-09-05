//Replace all word file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani;
    FILE *hari;
    // char b[SIZE];
    char source[SIZE];
    char dest[SIZE];
    // char word[SIZE];
    // char replace[SIZE];
    
    printf("Enter main file Path: ");
    scanf("%[^\n]",source);
    printf("Enter source file Path: ");
    scanf(" %[^\n]",dest);
    // printf("Enter word : ");
    // scanf(" %[^\n]",word);
    // printf("Enter replace word: ");
    // scanf(" %[^\n]",replace);
   
   //int len=0;
  // find length
    //while(word[len]!='\0')len++;
   
    //file open
   harimani=fopen(source, "r");
   hari=fopen(dest, "w");
    
    //file check opening
    if(harimani==NULL || hari==NULL){
        printf("Error! Not found");
        return 1;
    }
   char ch;
    while((ch=fgetc(harimani))!=EOF){
            if(ch>='a' && ch<='z'){
                fprintf(hari,"%c", ch-32);
             }else if(ch>='A' && ch<='Z'){
                fprintf(hari,"%c", ch+32);
             }else{
                 fprintf(hari,"%c",ch);
             }
    }
    
    
    fclose(harimani);
    fclose(hari);
   
    
    printf("\nSuccessfull Convert Lower to Upper");
    
    
    return 0;
}

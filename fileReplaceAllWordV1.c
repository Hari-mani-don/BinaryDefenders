//Replace all word file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani;
    FILE *hari;
    char b[SIZE];
    char source[SIZE];
    char dest[SIZE];
    char word[SIZE];
    char replace[SIZE];
    
    printf("Enter main file Path: ");
    scanf("%[^\n]",source);
    printf("Enter source file Path: ");
    scanf(" %[^\n]",dest);
    printf("Enter word : ");
    scanf(" %[^\n]",word);
    printf("Enter replace word: ");
    scanf(" %[^\n]",replace);
   
   int len=0;
   //find length
    while(word[len]!='\0')len++;
   
    //file open
    harimani=fopen(source, "r");
    hari=fopen(dest, "w");
    
    //file check opening
    if(harimani==NULL || hari==NULL){
        printf("Error! Not found");
        return 1;
    }
    
     int wo=0;
    while((fgets(b,SIZE,harimani))!=NULL){
        int i=0;
       
       while(b[i]!='\0'){
            if(b[i]==word[0]){
                int j=0, k;
                k=i, wo=0;
                while(word[j]!='\0'){
                    if(b[k]==word[j]){
                        j++;
                        wo++;
                        k++;
                    }
                    else{
                        break;
                    }
                }
            }
             if(len==wo){
                 int j=0;
                 while(replace[j]!='\0'){
                     fprintf(hari,"%c",replace[j]);
                     j++;
                 }
                 i=i+len;
               wo=0;
            }else{
                fprintf(hari,"%c",b[i]);
                i++;
                wo=0;
            }
           
       }   
        
        
    }
    
    
    fclose(harimani);
   
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

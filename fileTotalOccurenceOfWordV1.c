//Total Occurence of Last word file V2

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *harimani;
    char b[SIZE];
    char path[SIZE];
    char word[SIZE];
    int len=0;
    printf("Enter file Path: ");
    scanf("%[^\n]",path);
    printf("Enter word to find: ");
    scanf(" %[^\n]",word);
   
   
    //length of word
    while(word[len]!='\0')len++;
    
    //file open
    harimani=fopen(path, "r");
    
    //file check opening
    if(harimani==NULL){
        printf("Error! Not found");
        return 1;
    }
    
     int count=0,wo=0;
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
                count++;
                wo=0;
                printf("count %d\n", count);
            }   
           
            i++;
        }
        
    }
    
  if(count>0){
        printf("'%s' Total of Occurence : %d",word, count);
       }else{
        printf("Error! does not word\n");
        }
    
    fclose(harimani);
   
    
    printf("\nSuccessfull read");
    
    
    return 0;
}

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *file,
         *data;
    char a[SIZE];   
    char b[SIZE];
    char *ptr=a;
    char *ptr2=b;
    int col=0, line=2, found=1;    
    file=fopen("file.txt", "r");
    data=fopen("data.txt", "r");
    if(file==NULL || data==NULL){
        printf("Error! Not found");
        return 1;
    }
    while(fgets(a, SIZE, file)!=NULL);
    while(fgets(b, SIZE, data)!=NULL);
    while(*(ptr)!='\0'){
        if(*ptr=='\n'){
            line+=1;
            col=0;
        }
        
        if(*ptr==*ptr2){
            col++;
        }
        else{
            found=0;
            break;
        }
        *ptr++;
        *ptr2++;
    }
    
    if(found==1){
        printf("Both file are Equal");
    }
    else{
        printf("Both file are not equal\n");
        printf("line: %d, col: %d", line, col);
        
    }
    
    fclose(file);
    fclose(data);
    return 0;
}

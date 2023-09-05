//Merge Two file

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *hari,
         *mani,
         *harimani;
    char a[SIZE]; 
    char b[SIZE];
    char c[SIZE];

    hari=fopen("hari.txt", "r");
    mani=fopen("mani.txt", "r");
    harimani=fopen("HariMani:).txt", "w");
    if(hari==NULL || mani==NULL || harimani==NULL){
        printf("Error! Not found");
        return 1;
    }
    //read from file
    while(fgets(a,SIZE,hari)!=NULL){
        fprintf(harimani,"%s", a);
    }
    while(fgets(b,SIZE,mani)!=NULL){
        fprintf(harimani, "\n%s",b);
    }
    
    fclose(harimani);
    harimani=fopen("HariMani:).txt","r");
    
    while(fgets(c, SIZE, harimani)!=NULL){
        printf("%s", c);
    }
    
    fclose(hari);
    fclose(mani);
    fclose(harimani);
    
    
    return 0;
}

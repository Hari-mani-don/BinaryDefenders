//File read and store anothen file

#include<stdio.h>
#define SIZE 1000
int main(){
    FILE *file;
    FILE *odd;
    FILE *even;
    FILE *prime;
   
   int r=0;
   file=fopen("data.txt", "r");
   odd=fopen("odd.txt", "w");
   even=fopen("even.txt", "w");
   prime=fopen("prime.txt", "w");
   
   if(file==NULL || prime==NULL || odd==NULL || even==NULL){
       printf("Error file");
       return 1;
   }
    
    while(fscanf(file, "%d",&r)==1){
        if(r%2==0){
            fprintf(even, "%d\n", r);
        }
        else if(r%2!=0 && r%3!=0){
            fprintf(prime, "%d\n", r);
        }
        else{
            fprintf(odd, "%d\n", r);
        }
    }
    fclose(file);
    fclose(even);
    fclose(odd);
    fclose(prime);
    
    printf("Successfull Read and write File");
    return 0;
}

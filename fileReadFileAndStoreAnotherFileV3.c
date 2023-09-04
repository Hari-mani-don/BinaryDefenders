//File read and store anothen file

#include<stdio.h>
int isprime(int const num);
int isEven(int const num);
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

    while(fscanf(file, "%d",&r)!=-1){
        
        if(isprime(r)){
            fprintf(prime, "%d\n", r);
        } else if(isEven(r)){
            fprintf(even, "%d\n", r);
        } else{
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
int isprime(int const num){
    int i;
    if(num<0){
        return 0;
    }
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
}
int isEven(int const num){
    return !(num & 1);
}

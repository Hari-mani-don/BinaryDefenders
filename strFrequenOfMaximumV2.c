//find maximum occurring character in a string V2.c

#include<stdio.h>
#define SIZE 100
char frequence(char *a, char *freq);
char swap(char *a, char *freq, int len);
int main(){
    char b[SIZE];
    char fre[SIZE];
    printf("Enter string: ");
    scanf("%[^\n]", b);
    frequence(b, fre);
    return 0;
}
char frequence(char *a, char *freq){
    int len=-1;
    while(a[++len]!='\0');
    for(int i=0;i<len;i++){
         freq[i]=-1;
    }
    
    for(int i=0;a[i]!='\0';i++){
        
        int count=0;
        for(int j=i+1;j<len;j++){
             if(a[i]==a[j] && a[i]!=' '){
                 count++;
                 freq[j]=0;
             }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
       
    }
    
   swap(a, freq, len);    
}
char swap(char *a, char *freq, int len){
    char copy[SIZE];
    int k=0,f=0;
    for(int i=0;i<len;i++){
        copy[i]=freq[i];
    }
    
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len-i;j++){
            if(freq[i]<freq[j]){
                int temp=freq[i];
                freq[i]=freq[j];
                freq[j]=temp;
            }
        }
        
    }
    
    for(int i=0;i<len;i++){
        if(copy[i]!=0){
            f=1;
        }
        
    }
    
    while(a[k]!='\0'){
        if(f==0){
            printf("Not Maximum character Available");
            break;
        }
        else{
           if(copy[k]==freq[0]){
            printf("Maximum of frequency %c=%dtimes\n", a[k], freq[0]+1);
            }
        }
        k++;
    }
    
}

//Frequence of All character in a string V1.c

#include<stdio.h>
#define SIZE 100
char frequence(char *a, char *freq);
int main(){
    char b[SIZE];
    char fre[SIZE];
    printf("Enter string: ");
    scanf("%[^\n]", b);
    printf("frequence of All character\n");
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
             if(a[i]==a[j]){
                 count++;
                 freq[j]=0;
             }
        }
        if(freq[i]!=0){
            freq[i]=count;
            printf("'%c' : %d\n", a[i], freq[i]+1);
        }
       
    }
    
    
     
}

//String reverse order of words in a string Version V1

#include<stdio.h>
#define SIZE 100
char reverseword(char a[]);
int main(){
    char a[SIZE];
    printf("Enter string: ");
    scanf("%[^\n]", a);
    reverseword(a);
    
    return 0;
}

char reverseword(char a[]){
    int i=0;
    int pre='\0';
    while(a[i]!='\0')i++;
    int k=1;
     while(i>=-1){
        if(a[i]==' ' || a[i]=='\0'|| a[i]=='\n'|| a[i]=='\t'){
            if(pre!=' ' && pre!='\0' && pre!='\n' && pre!='\t'){
                int j=i+1;
                while(a[j]!=' '&&a[j]!='\0' && a[j]!='\n' && a[j]!='\t'){
                    printf("%c",a[j]);
                    j++;
                    if(a[j]==' '|| a[j]=='\0'){
                        printf(" ");
                    }
                    
                }
            }
        }
        if(k==1){
            i--;
            k=0;
        }
        pre=a[i];
        
        if(a[i]=='\0'){
            break;
        }
        else
        { 
               i--;
        }
        
    }    
} 

          
   

    

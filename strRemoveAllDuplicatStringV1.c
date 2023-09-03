//Remove All Duplicate of STring Version V1.c

#include<stdio.h>
#define SIZE 100
char duplicate(char *a);
int main(){
    char a[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    duplicate(a);
    return 0;
}
char duplicate(char *a){
    int k=0, len=0;
    char b[SIZE];
    while(a[len]!='\0')len++;
    for(int s=0;s<len;s++){
        int dupl=1;
        for(int t=0;t<s;t++){
            if(s!=t && b[t]==a[s] && a[s]!=' '){
                    dupl=0; 
            }
        }
        if(dupl==1){
            b[k]=a[s];
            k++;
        }
        
    }
    printf("Remove Duplicat String of : %s", b);
}

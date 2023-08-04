   //Manual string compare function

#include<stdio.h>
int main(){
    char a[]="hari";
    char b[]="haris";
    int sizeA=sizeof(a) / sizeof(a[0]);
    int sizeB=sizeof(b) / sizeof(b[0]);
    int count=0;
    if(sizeA==sizeB){
        for(int i=0;i<sizeA;i++){
            if(a[i]==b[i]){
                count++;
            }
        }
    }
    if(sizeA==count){
        printf("The string is 'equal'");
        
    }
    else{
        printf("string are 'not equal'");
    }
    return 0;
}

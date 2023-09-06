//Macro use to find upper or Lower
#include<stdio.h>
#define IS_UPPER(a) (a>='A' && a<='Z')
#define IS_LOWER(a) (a>='a' && a<='z')
int main(){
    char x='0';
    
    if(IS_UPPER(x)){
        printf("%c is Upper", x);
    }else if(IS_LOWER(x)){
        printf("%c is Lower", x);
    }else{
        printf("'%c' is not a charcter", x);
    }
    
    return 0;
}

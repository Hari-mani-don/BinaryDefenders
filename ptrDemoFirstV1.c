#include<stdio.h>
int main(){
    // int a=10;
    // int *b; //creat
    // b=&a;// initialize
    
    // printf("Access values %d\n", a);
    // printf("Access values %p\n", &b);
    // printf("Access values %d\n", *b);
    // printf("Access values %d\n", *b+a);
    
    char a='A';
    char *b;
    b=&a;
    printf("Access VAlues : %c\n", a);
    printf("Address VAlues : %p\n", &a);
    printf("Address VAlues : %p\n", b);
    printf("Access VAlues : %c\n", *b);
    printf("Address VAlues : %p\n", &b);
    
   
    
    return 0;
}

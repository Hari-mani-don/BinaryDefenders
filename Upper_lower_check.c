/*Write a C program to input character from user and check whether 
character is uppercase or lowercase alphabet using if else. 
How to check uppercase and lowercase using if else in
C programming. Logic to check uppercase and lowercase alphabets in C program.*/


#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character to check lower or upper: ");
    scanf("%c", &ch);
    
    if(ch>='a' && ch<='z'){
        printf("'%c' is lower case", ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("'%c' is upper case", ch);
    }
    else{
        printf("try again");
    }
}

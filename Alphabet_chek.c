/*Write a C program to input a character from user and check whether the
given character is alphabet or not using if else. How to check whether a character is 
alphabet or not in C programming. Logic to check if a character is alphabet or not in C program.*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character to check 'alphabet or not':");
    scanf("%c", &ch);
    
    
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("The character is alphabet");
        
    }
    else{
        printf("this is not alphabet");
    }
    
}

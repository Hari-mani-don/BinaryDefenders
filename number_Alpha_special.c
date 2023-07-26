/*Write a C program to input a character from user and check whether given character is alphabet,
digit or special character using if else. How to check if a character is alphabet,
digits or any other special character using if else in C programming. 
Logic to check alphabet, digit or special character in C programming.*/

#include<stdio.h>
int main(){
    char ch;
    
    printf("Enter the character to check: ");
    scanf("%c", &ch);
    
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("The given charcter is 'alphabet' ");
    }
    else if(ch>='0' && ch<='9'){
        printf("The given character is 'Number' ");
    }
    else {
        printf("The given character is 'special charcter' ");
    }
    return 0;
}

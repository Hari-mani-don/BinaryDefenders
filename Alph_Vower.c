/*Write a C program to check whether an alphabet is vowel or consonant 
using if else. How to check vowels and consonants using if else in C programming.
C Program to input a character from user and check whether
it is vowel or consonant. Logic to check vowel or consonant in C programming.*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character to check 'vowels or consonant': ");
    scanf("%c", &ch);
    
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if(ch=='a' || ch=='e'||ch=='i' || ch=='o' || ch=='u'){
            printf("The character is vowel");
        }
        else if(ch=='A' || ch=='E'||ch=='I' || ch=='O' || ch=='U'){
            printf("The character is vowel");
        }
        else{
             printf("This character is consonant");
        }
    }
    else{
        printf("This is not alphabet. try again");
    }
}

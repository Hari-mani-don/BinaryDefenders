/* Write a C program to input a number from user and print it into words using for loop. How to display number in words using loop in C programming.
Logic to print number in words in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n, reverse,sum, length, rev;
    printf("Enter the number: ");
    scanf("%d", &n);
    length=(int)log10(n);
    int temp = n;
    for(int i=0; i<length+1;i++){
        reverse = temp%10;
        temp/=10;
        sum = (sum *10) + reverse;
    }
    for(int i=0;i<length+1;i++){
        rev=sum%10;
        sum/=10;
        if(rev==0){
            printf("Zero ");
        }
        else if(rev==1){
            printf("One ");
        }
        else if(rev==2){
            printf("Two ");
        }
        else if(rev==3){
            printf("Three ");
        }
        else if(rev==4){
            printf("Four ");
        }
        else if(rev==5){
            printf("Five ");
        }
        else if(rev==6){
            printf("Six ");
        }
        else if(rev==7){
            printf("Seven ");
        }
        else if(rev==8){
            printf("Eight");
        }
        else if(rev==9){
            printf("Nine ");
        }
    }
    return 0;
}

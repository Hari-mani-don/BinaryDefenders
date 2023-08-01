/*Write a C program to create menu driven calculator that performs basic arithmetic operations 
(add, subtract, multiply and divide) using switch case and functions. The calculator should input 
two numbers and an operator from user.It should perform operation according to the operator
entered and must take input in given format.
*/


#include<stdio.h>
int main(){
    int num1, num2, menu, result;
    printf("\n\t\tMenubar\n\t1.addition\n\t2.subtraction\n\t3.Multiplication\n\t4.Divishion\n");
    
    printf("choose option (1-4): ");
    scanf("%d", &menu);
    
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    
    switch(menu){
        case 1:
           result= num1 + num2;
           printf("The value of Addition %d + %d = %d", num1, num2, result);
            break;
        case 2:
           result= num1 - num2;
           printf("The value of Subtraction %d - %d = %d", num1, num2, result); 
            break;
        case 3:
           result= num1 * num2;
           printf("The value of Multiplication %d * %d = %d", num1, num2, result);
            break;
        case 4:
           if(num2 == 0){
               printf("Try again. Divishion is zero");
               break;
           }
           else{
           result= num1 / num2;
           printf("The value of Divishion %d / %d = %d", num1, num2, result);
           break;
           }
        default: 
           printf("Error ! Invalid input");
    }
    return 0;
    
    
}

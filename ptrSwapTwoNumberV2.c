// swap two numbers using pointers V1

#include<stdio.h>
void swap(int *num1, int *num2);
int main(){
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    printf("before swap A=%d\n",a);
    printf("before swap B=%d\n",b);
    swap(&a, &b);
    
  return 0;
}
void swap(int *num1, int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
    
    printf("After Swapping\n");
    printf("A=%d\n", *num1);
    printf("B=%d\n", *num2);
}

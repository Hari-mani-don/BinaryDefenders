// Add two numbers using pointers V1

#include<stdio.h>
int main(){
    int a, b;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("Enter a & b");
    scanf("%d %d", ptr1, ptr2);
    printf("Addition of Value: %d\n", *ptr1 + *ptr2);
    printf("Difference of Value: %d\n", *ptr1 - *ptr2);
    printf("Division of Value: %d\n", *ptr1 / *ptr2);
    printf("Addition of Value: %d\n", (*ptr1) * (*ptr2));
    
    printf("a=%d", a);
    printf("b=%d", b);
  return 0;
}

// swap two numbers using pointers V1

#include<stdio.h>
int main(){
    int a, b;
    int *ptr1=&a;
    int *ptr2=&b;
    
    
     
    printf("Enter a & b: ");
    scanf("%d %d", ptr1, ptr2);
    printf("before swap A=%d\n",a);
    printf("before swap B=%d\n",b);
    int *temp=ptr1;
     ptr1=ptr2;
     ptr2=temp;
     
    printf("after swap A=%d\n",*ptr1);
    printf("after swap B=%d\n",*ptr2);
    
    
  return 0;
}

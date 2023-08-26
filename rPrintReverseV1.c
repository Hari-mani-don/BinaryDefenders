
//recursion print reverse value Version V1


#include <stdio.h>
int printReverse(int n);
int sum=0;
int main()
{
   int n;
   printf("input any number: ");
   scanf("%d", &n);
   
   printReverse(n);

    return 0;
}

int printReverse(int n){
    if(n==0){
         printf("Reverse: %d\n", sum);
        return 0;
    }
   
    int temp=n%10;
    sum=(sum*10)+temp;
    printReverse(n/=10);
}

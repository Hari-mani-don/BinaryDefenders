//functiion using cube of given number Version V2


#include <stdio.h>
double cube(double n);
int main()
{
   int n, sum;
   printf("Input number: ");
   scanf("%d", &n);

   printf("%.2f", cube(n));

    return 0;
}
double cube(double n){
   
    return n * n * n;
}

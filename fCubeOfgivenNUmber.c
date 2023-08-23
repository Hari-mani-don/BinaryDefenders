//fnction using cube of given number

#include <stdio.h>
int cube(int n);
int main()
{
   int n, sum;
   printf("Input number: ");
   scanf("%d", &n);
   sum=cube(n);
   printf("%d", sum);

    return 0;
}
int cube(int n){
   int sum=1;
    for(int i=0;i<3;i++){
        sum*=n;
    }
    return sum;
}

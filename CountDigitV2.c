#include<stdio.h>
int main(){
    int n, count;
    printf("Enter the number; ");
    scanf("%d", &n);
    while(n!=0) {
        n/=10;
        count++;
    }
    printf("Count of : %d", count);
  return 0;    
}

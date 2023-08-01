#include<stdio.h>
int main(){
    int  num;
    long long int sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Natural number from 1 to %d ",num);
    for(int i=1; i<=num; i++){
        sum=i + sum*10;
    }
    printf("%llu",sum);
}

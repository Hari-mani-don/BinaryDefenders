#include<stdio.h>
int main(){
    int n, cur, lastDigit;
    long long fact, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        cur=i;
        sum=0;
        while(cur>0){
            fact=1ll;
            lastDigit=cur%10;
            for(int j=1;j<=lastDigit;j++){
                fact=fact*j;
            }
            sum+=fact;
            cur/=10;
        }
        if(sum==i){
            printf("%lld ", sum);
        }
        
    }
    return 0;
}

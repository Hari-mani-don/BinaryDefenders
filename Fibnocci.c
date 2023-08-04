#include<stdio.h>
int main(){
    int n, sum, a=0, swap=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Fibocci series of:\n ");
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d\n", swap);
            
        }
        else{
            sum=a+swap;
            printf("%d\n", sum);
            a=swap;
            swap=sum;
        }
    }
    return 0;
}

//Recursion using to print Array value version V1

#include<stdio.h>
int sum=0;
int printfArray(int a[], int n, int sum);
int main(){
    int n;
    printf("How many value do you want to store: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printfArray(a, n, sum);
  return 0;
}

int printfArray(int a[], int n, int sum){
    printf("%d", a[sum]);
    if(sum==n-1){
        return 0;
    }
    printfArray(a, n, sum+1);
}

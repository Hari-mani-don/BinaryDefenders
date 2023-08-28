//Recursion using to sum Of Array value version V1

#include<stdio.h>
int sum=0, retsult =0;
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
    int v=printfArray(a, n, sum);
    printf("sum Of Array: %d", v);
    
  return 0;
}

int printfArray(int a[], int n, int sum){
   retsult+=a[sum];
    if(sum==n-1){
        
        return retsult;
    }
    printfArray(a, n, sum+1);
}

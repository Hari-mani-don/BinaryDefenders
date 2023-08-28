//recursion using print Maximum of Array Version V1

#include<stdio.h>
int max(int arr[], int sum, int n); 
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
   max(arr, 1, n);
   
    //min(arr, 1,);
  return 0;    
}

int max(int arr[], int sum, int n){
    if(arr[0]<arr[sum]){
        int temp=arr[0];
        arr[sum+1]=temp;
        arr[0]=arr[sum];
    }
    if(sum==n-1){
        printf("Max of %d", arr[0]);
        return 0;
    }
    max(arr, sum+1, n);
}

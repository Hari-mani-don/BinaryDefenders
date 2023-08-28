//Array using print Minus element Version V1

#include<stdio.h>
int minusArray(int arr[], int i, int len);
int main(){
    int n;
    printf("Enter Array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    minusArray(arr,0, n);
    return 0;
}

int minusArray(int arr[], int i, int len){
    if(arr[i]<0){
        printf("%d", arr[i]);
    }
    if(i>len-1){
        return 0;
    }
    minusArray(arr, i+1, len);
}

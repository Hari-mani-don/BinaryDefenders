//Array  Count Negative Value  Version V1

#include<stdio.h>
int negativeValueCount(int arr[], int n);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int neg=negativeValueCount(arr, n);
    printf("Even : %d\n", neg);
    
    return 0;
}

int negativeValueCount(int arr[], int n){
    int negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }
    }
    return negative;
}

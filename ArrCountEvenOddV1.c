//Array  Count Even Odd Version V1

#include<stdio.h>
int EvenOdd(int arr[], int n);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int Even=EvenOdd(arr, n);
    printf("Even : %d\n", Even);
    printf("Odd : %d\n", n-Even);
    return 0;
}

int EvenOdd(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

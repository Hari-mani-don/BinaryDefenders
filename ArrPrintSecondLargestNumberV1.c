#include<stdio.h>
int printSecondLargestArray(int a[], int len);
int main(){
    int n;
    printf("Enter arraty size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printSecondLargestArray(arr,n);
    return 0;
}
int printSecondLargestArray(int a[], int len){
    for(int i=0;i<2;i++){
        for(int j=1;j<=len-i;j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    printf("Second Largest number:  %d", a[1]);
}

//sort array in seperately Version v1

#include<stdio.h>
#define MAX_SIZE 100
int  oddSorted(int arr[], int n);
int  evenSorted(int arr[], int n);
int accendingSort(int arr1[], int size);
int main(){
  int arr[MAX_SIZE];
   
   int n;
   printf("Enter Array Size :");
   scanf("%d", &n);
  
  printf("Enter Array element : ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  
   printf("Sorted array : ");
   accendingSort(arr, n);
   if(n%2==0){
      evenSorted(arr, n);
      oddSorted(arr, n);
   }
   else{
       
      oddSorted(arr, n);
      evenSorted(arr, n);
   }
   
   return 0;
}

int accendingSort(int arr1[], int size){

    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){
            if(arr1[i]>arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }

    }
}

int  oddSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            printf("%d ", arr[i]);
        }
    }
}
int  evenSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
    }
}

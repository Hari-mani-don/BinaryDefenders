//Reverse of Array Version v1

#include<stdio.h>
#define MAX_SIZE 100
int reverseOfArray(int arr[], int n);
int main(){
  int arr[MAX_SIZE];
   
   int n;
   printf("Enter Array Size of a:");
   scanf("%d", &n);
  
  printf("Enter Array element of b: ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  printf("Reverse of Array : ");
   
   reverseOfArray(arr, n);
   return 0;
}

int reverseOfArray(int arr[], int n){
    
    for(int i=n-1;i>=0;i--){
       printf("%d ", arr[i]);
        
    }
    
}


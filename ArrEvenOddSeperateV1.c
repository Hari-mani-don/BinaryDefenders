//seperate Even and odd element in Array Version v1

#include<stdio.h>
#define MAX_SIZE 100
int oddElement(int arr[], int n);
int evenElement(int arr[], int n);
int main(){
  int arr[MAX_SIZE];
   
   int n;
   printf("Enter Array Size of a:");
   scanf("%d", &n);
  
  printf("Enter Array element of b: ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  
   printf("odd element of Array :");
   oddElement(arr, n);
   printf("\nEven element of Array : ");
   evenElement(arr, n);
   return 0;
}

int oddElement(int arr[], int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        
        }
    }
}

int evenElement(int arr[], int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            printf("%d ", arr[i]);
        }
    }
    
}


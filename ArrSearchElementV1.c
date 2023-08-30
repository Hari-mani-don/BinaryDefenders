//search element in Array Version v1

#include<stdio.h>
#define MAX_SIZE 100
int searchElement(int arr[], int n, int ser);
int main(){
  int arr[MAX_SIZE];
   
   int n, serch;
   printf("Enter Array Size :");
   scanf("%d", &n);
  
  printf("Enter Array element : ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  printf("Serch element : ");
  scanf("%d", &serch);
   printf("Element to search is %d ", serch);
   searchElement(arr, n, serch);
   
   return 0;
}

int searchElement(int arr[], int n, int ser){
    int search=1;
    for(int i=0;i<n;i++){
        if(arr[i]==ser){
            printf("\nElement found at index %d", i);
            search=0;
        
        }
       
    }
     if(search==1){
            printf("\nThe Element of out of value in the Array");
        }
}




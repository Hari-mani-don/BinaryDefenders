//Merge Array Accending Order Version v1

#include<stdio.h>
#define MAX_SIZE 100
int accendingSort(int arr1[], int a, int b);
int MergeArray(int arr1[],int arr2[],int a, int b);
int main(){
  int arr1[MAX_SIZE];
   int arr2[MAX_SIZE];
   int a, b, n;
   printf("Enter Array Size of a:");
   scanf("%d", &a);
   printf("Enter Array Size of b:");
   scanf("%d", &b);
   printf("Enter Array element of a: ");
   for(int i=0;i<a;i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter Array element of b: ");
  for(int i=0;i<b;i++){
    scanf("%d", &arr2[i]);
  }
  printf("Merge Array in Accending Order : ");
   MergeArray(arr1,arr2,a, b);
   accendingSort(arr1, a, b);
   return 0;
}

int MergeArray(int arr1[],int arr2[],int a, int b){
    int j=0;
    for(int i=a;i<a+b;i++){
        arr1[i]=arr2[j];
        j++;
    }
    
}

int accendingSort(int arr1[], int a, int b){
  
    for(int i=0;i<a+b;i++){
       
        for(int j=i+1;j<a+b;j++){
            if(arr1[i]>arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
               
                
            }
        }
        
    }
     printf("Array: ");
    for(int i=0;i<a+b;i++){
        printf("%d", arr1[i]);
    }
     
    
}

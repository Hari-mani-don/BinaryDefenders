//Accending orden in Array Version v1

#include<stdio.h>
#define MAX_SIZE 100
int accendingSort(int arr1[], int Size);
int main(){
  int arr[MAX_SIZE];
   
   int n;
   printf("Enter Array Size :");
   scanf("%d", &n);
  
  printf("Enter Array element : ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  
   printf("Sort of Array in Accending : ");
  accendingSort(arr, n);
   
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
    
    for(int i=0;i<size;i++){
        printf("%d ", arr1[i]);
    }


}

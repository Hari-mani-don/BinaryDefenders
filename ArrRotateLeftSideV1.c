//rotate array leftn side Version v1

#include<stdio.h>
#define MAX_SIZE 100
int rotateLeftArray(int arr[], int n, int rotate);
int main(){
  int arr[MAX_SIZE];
   
   int n,rotate;
   printf("Enter Array Size :");
   scanf("%d", &n);
  
  printf("Enter Array element : ");
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
   printf("Input number of Time to rotate: ");
   scanf("%d", &rotate);
   if(rotate>=0 && rotate<=n){
       printf("Sorted array : ");
   rotateLeftArray(arr, n, rotate);
   }
   else{
       printf("Rotate array is out of Array");
   }
   
   
   
   return 0;
}
int rotateLeftArray(int arr[], int size, int rotate){
    int j=0;
    for(int i=0;i<size;i++){
        if(rotate+i<size){
            printf("%d",arr[rotate+i]);
        }
        else
        {
            if(j<rotate){
                printf("%d", arr[j]);
                j++;
            }
        }
    }
}

//Print RemoveDuplicate element Version v1

#include<stdio.h>
#define MAX_SIZE 100
int RemoveDuplicate(int arr[], int n);
int main(){
  int arr[MAX_SIZE];
   int n;
   printf("Enter Array Size:");
   scanf("%d", &n);
   printf("Enter Array element: ");
   for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  printf("After Remove Duplicat Element : ");
   RemoveDuplicate(arr, n);
   return 0;
}

int RemoveDuplicate(int arr[], int n){
      int b[n];
      int k=0;
      for(int i=0;i<n;i++){
         int freq=1;
         for(int j=0;j<i;j++){
               if(i==j){
                       //
                  }
               else{ 
                  if(b[j]==arr[i]){
                         freq=0;
                      }   
                  }
               }
            if(freq==1){
                  b[k]=arr[i];
                  k++;
                }
      }
      for(int z=0;z<k;z++){
          printf("%d ",b[z]);
      }
        
        
       
    }
    

/* find Frequency of each element and count frequency of each element version V1*/

#include<stdio.h>
int frequency(int arr[], int n);
#define MAX_SIZE 100
int main(){
int arr[MAX_SIZE];
int n;
printf("Enter Array Size:");
scanf("%d", &n);
printf("Enter Array element: ");
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
frequency(arr, n);
return 0;
}

int frequency(int arr[], int n){
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
     for(int l=0;l<k;l++){
       int count=0;
         for(int m=0;m<n;m++){
             if(b[l]==arr[m]){
             
                count++;
                
             }
         }
        printf("frequency of %d = %d\n", b[l], count);
        count=0;
       }
    }
    
    
    
    
    
    

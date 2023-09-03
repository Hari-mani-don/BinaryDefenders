// print Array Element using pointers V1

#include<stdio.h>
#define SIZE 100

int main(){
    int n;
    int arr[SIZE];
    int *ptr=arr;
    printf("Enter array size : ");
    scanf("%d", &n);
    
    printf("Ente array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", ptr);
        ptr++;
    }
    ptr=arr;
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        printf("%d ", *ptr);
        ptr++;
    }
    
  return 0;
}

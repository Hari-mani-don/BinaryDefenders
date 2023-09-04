//Reverse Array using pointer V1

//input array size and array element
//print array
//Reverse array1 to array2 use array size to run for loop
//print array

#include<stdio.h>
#define SIZE 100
void printArray(int *arr, int size);
void reverseArray(int *arr, int *arr2, int size);
int main(){
    int arr1[SIZE];
    int arr2[SIZE];
    int size, i;
    
    int *ptr1=arr1;
    
    printf("Enter Array size: ");
    scanf("%d", &size);
    
    printf("Enter Array element: ");
    for(i=0;i<size;i++){
        scanf("%d", ptr1+i);
    }
   
   
    printf("\nBefore Reverse Array : ");
    printArray(arr1, size);
    
     //Reverse Array
     reverseArray(arr1, arr2, size);
     
    printf("\nAfter Reverse Array : ");
    printArray(arr2, size);
    
    
    return 0;
}
void reverseArray(int *arr, int *arr2, int size){
    int i, j=0;
     for(i=size-1;i>=0;i--){
         *(arr2+j)=*(arr+i);
         j++;
     }
}

void printArray(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", *(arr+i));
    }
}

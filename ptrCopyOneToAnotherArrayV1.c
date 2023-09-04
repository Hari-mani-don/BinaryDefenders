//Copy Source to Destination Array in pointer Version v1

#include<stdio.h>
#define SIZE 100
void printArray(int *arr, int size);
int main(){
    int source_arr[SIZE];
    int dest_arr[SIZE];
    int size, i;
    
    int *source_ptr=source_arr;
    int *dest_ptr=dest_arr;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    printf("Enter array element: ");
    for(i=0;i<size;i++){
        scanf("%d", source_ptr+i);
    }
   
   printf("\nBefore copy source array: ");
   printArray(source_arr, size);
   printf("\nBefore copy destination array: ");
   printArray(dest_arr, size);
   
   int a=size;
    //copy source_arr to dest_arr
    while(a>0){
        *dest_ptr++=*source_ptr++;
        a--;
    }
    
   printf("\nAfter copy source array: ");
   printArray(source_arr, size);
   printf("\nAfter copy destination array: ");
   printArray(dest_arr, size);
}


void printArray(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", *(arr+i));
    }
}

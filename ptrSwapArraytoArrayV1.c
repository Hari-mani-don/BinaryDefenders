//swap array to another array using pointer V1

#include<stdio.h>
#define SIZE 100
void printArray(int *arr, int size);
int main(){
    int arr1[SIZE];
    int arr2[SIZE];
    int temp[SIZE];
    int size1, size2, i;
    
    int *ptr1=arr1;
    int *ptr2=arr2;
    int *ptr3=temp;
    
    
    printf("Enter Array1 size: ");
    scanf("%d", &size1);
    printf("Enter Array2 size: ");
    scanf("%d", &size2);
    
    printf("Enter Array1 element: ");
    for(i=0;i<size1;i++){
        scanf("%d", ptr1+i);
    }
    
    printf("\nEnter Array2 element: ");
    for(i=0;i<size2;i++){
        scanf(" %d", ptr2+i);
    }
    
   
    printf("\nBefore swap Array1 : ");
    printArray(arr1, size1);
    printf("\nBefore swap Array2 : ");
    printArray(arr2, size2);
    
     //swap arr1 to temp
     for(i=0;i<size1;i++){
         *(ptr3+i)=*(ptr1+i);
     }
     
     //swap arr2 to arr1
      for(i=0;i<size2;i++){
         *(ptr1+i)=*(ptr2+i);
     }
     
     //swap temp to arr2
      for(i=0;i<size2;i++){
         *(ptr2+i)=*(ptr3+i);
     }
     
    printf("\nAfter swap Array1 : ");
    printArray(arr1, size2);
    printf("\nAfter swap Array2 : ");
    printArray(arr2, size1);
    
    return 0;
}

void printArray(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d", *(arr+i));
    }
}

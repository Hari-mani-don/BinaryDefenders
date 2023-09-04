//search element and find using pointer V1

//input array size, search element and array element
//print the search element position or print does not available in this element

#include<stdio.h>
#define SIZE 100
void searchArray(int *arr, int size, int search);

int main(){
    int arr1[SIZE];
    int size, i, search;
    
    int *ptr1=arr1;
    
    printf("Enter Array size: ");
    scanf("%d", &size);
    
    printf("Enter Array element: ");
    for(i=0;i<size;i++){
        scanf("%d", ptr1+i);
    }
   
    printf("search element: ");
    scanf("%d", &search);
    
     //search  and print
     searchArray(arr1, size, search);
     
    return 0;
}
void searchArray(int *arr, int size, int search){
    int i, found=0;
    for(i=0;i<size;i++){
        if(*(arr+i)==search){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("'%d' is found at position: %d", search, i+1);
    }
    else{
        printf("does not available in this element");
    }
}

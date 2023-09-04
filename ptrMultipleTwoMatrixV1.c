//Multiple two matrinx using pointer V1.c

#include<stdio.h>
#define SIZE 3
void inputMatrix(int arr[SIZE][SIZE], int size);
void printMatrix(int arr3[SIZE][SIZE], int size);
void MultipleMatrix(int arr1[SIZE][SIZE],int arr2[SIZE][SIZE],int arr3[SIZE][SIZE], int size);
int main(){
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int arr3[SIZE][SIZE];
    
    printf("Enter array1 element %dx%d:\n", SIZE, SIZE);
    inputMatrix(arr1, SIZE);
    printf("Enter array2 element %dx%d:\n", SIZE, SIZE);
    inputMatrix(arr2, SIZE);
    
    
    //Add two matrix
    MultipleMatrix(arr1, arr2,arr3, SIZE);
    
    //print Matrix
    printf("Add Two Matrix %dx%d\n", SIZE, SIZE);
    printMatrix(arr3, SIZE);
    
    
    return 0;
}
void inputMatrix(int arr[SIZE][SIZE], int size){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d", (*(arr+i)+j));
        }
        printf("\n");
    }
}
void MultipleMatrix(int arr1[SIZE][SIZE],int arr2[SIZE][SIZE],int arr3[SIZE][SIZE], int size){
    int i, j, k, sum;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            sum=0;
            for(k=0;k<size;k++){
            sum+=(*(*(arr2+i)+k)) * (*(*(arr1+k)+j));
            }
            *(*(arr3+i)+j)=sum;
        }
    }
}
void printMatrix(int arr3[SIZE][SIZE], int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d", *(*(arr3+i)+j));
        }
        printf("\n");
    }
}
















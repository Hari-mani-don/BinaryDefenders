//Add two matrinx using pointer V1.c

include<stdio.h>
#define SIZE 3
void inputMatrix(int arr[SIZE][SIZE], int size);
void printMatrix(int arr3[SIZE][SIZE], int size);
void AddMatrix(int arr1[SIZE][SIZE],int arr2[SIZE][SIZE],int arr3[SIZE][SIZE], int size);
int main(){
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int arr3[SIZE][SIZE];
    
    printf("Enter array1 element %dx%d:\n", SIZE, SIZE);
    inputMatrix(arr1, SIZE);
    printf("Enter array2 element %dx%d:\n", SIZE, SIZE);
    inputMatrix(arr2, SIZE);
    
    
    //Add two matrix
    AddMatrix(arr1, arr2,arr3, SIZE);
    
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
void AddMatrix(int arr1[SIZE][SIZE],int arr2[SIZE][SIZE],int arr3[SIZE][SIZE], int size){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            *(*(arr3+i)+j)=*(*(arr2+i)+j) + *(*(arr1+i)+j);
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
















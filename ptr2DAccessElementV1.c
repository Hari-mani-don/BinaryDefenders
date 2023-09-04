//Access two diamensitional array using pointer V1

//input get from user array element and stor it some variable like arr
//print this element

#include<stdio.h>
#define ROWS 3
#define COLS 3
void printArray(int arr[ROWS][COLS], int rows, int cols);
void inputMatrix(int arr[ROWS][COLS], int rows,int cols);
int main(){
    int arr[ROWS][COLS];

    
    printf("Enter Array element:\n");
    inputMatrix(arr, ROWS, COLS);
    
     //print Array element
     printf("Element of Array element:\n");
     printArray(arr, ROWS, COLS);
     
    return 0;
}
void inputMatrix(int arr[ROWS][COLS], int rows,int cols){
    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        scanf("%d", (*(arr+i)+j));
        }
        printf("\n");
    }
}
void printArray(int arr[ROWS][COLS], int rows, int cols){
    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
         printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}

//Sort Array Accending and Decending of order V1

#include<stdio.h>
#define SIZE 100
int inputArray(int *sort, int size);
int printArray(int *sort, int size);
int sortArray(int *sort, int size);

int main(){
    int sort[SIZE];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);


    printf("Enter array element: ");
    inputArray(sort, n);
    
    
    printf("Before Sort Array: ");
    printArray(sort, n);
    
    
    printf("\n\nAfter sort in accending order: ");
    sortArray(sort, n);
    printArray(sort, n);
    
   return 0;
}
int inputArray(int *sort, int size){
    int i;
     for(i=0;i<size;i++){
        scanf("%d",&i[sort]);
    }
}
int printArray(int *sort, int size){
    int i;
     for(i=0;i<size;i++){
        printf("%d ", i[sort]);
    }
}
int sortArray(int *sort, int size){
    int i, j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
           if(*(sort+i)<*(sort+j)){
               int temp;
               temp=*(sort+i);
               *(sort+i)=*(sort+j);
               *(sort+j)=temp;
           } 
        }
    }
}











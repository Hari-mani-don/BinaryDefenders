//Array  delete Value  Version V1

#include<stdio.h>
int deletetArray(int arr[], int n, int val);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int Position;
    printf("enter Position: ");
    scanf("%d", &Position);
    
    deletetArray(arr, n, Position);
   
    return 0;
}

int deletetArray(int arr[], int n, int Position){
   int b[n];
    
    for(int i=0;i<n-1;i++){
        
        if(i<Position-1){
            
            b[i]=arr[i];
        }
        
        else{
            b[i]=arr[i+1];
        }
    }
    printf("After insert value : ");
    for(int j=0;j<n-1;j++){
        printf("%d ", b[j]);
    }
}


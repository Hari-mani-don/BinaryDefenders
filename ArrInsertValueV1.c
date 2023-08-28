//Array  insert Value  Version V1

#include<stdio.h>
int insertArray(int arr[], int n, int Position, int val);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int Position, val;
    printf("enter Position: ");
    scanf("%d", &Position);
    printf("enter val: ");
    scanf("%d", &val);
    insertArray(arr, n, Position, val);
   
    return 0;
}

int insertArray(int arr[], int n, int Position, int val){
   int b[n+1];
    
    for(int i=0;i<n+1;i++){
        
        if(i<Position-1){
            
            b[i]=arr[i];
        }
        else if(Position-1==i){
            
            b[i]=val;
        }
        else{
            b[i]=arr[i-1];
        }
    }
    printf("After insert value : ");
    for(int j=0;j<n+1;j++){
        printf("%d ", b[j]);
    }
}


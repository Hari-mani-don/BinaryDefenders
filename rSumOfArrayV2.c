//recursion usint Sum of Array Version V2

#include<stdio.h>
#define MAX_SIZE 100
int sum(int arr[], int start, int len);
int main(){
    int arr[MAX_SIZE];
    int n, sumOfArray, i;
    printf("Enter size of Array:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    sumOfArray=sum(arr, 0, n);
    printf("Sum: %d", sumOfArray);
  return 0;    
}

int sum(int arr[], int start, int len){
    if(start>=len){
        return 0;
    }
    return (arr[start]+sum(arr, start+1, len));
}

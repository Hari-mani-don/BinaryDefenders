//Array  Copy One Array to Another  Version V1

#include<stdio.h>
int copyArray(int arr[], int n);
int printcopyArray(int arr[], int n);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    int cArray[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    copyArray(arr, n);
   
    return 0;
}

int copyArray(int arr[], int n){
    int cArray[n];
    
    for(int i=0;i<n;i++){
        cArray[i]=arr[i];
    }
    printf("After Array Element:");
     for(int i=0;i<n;i++){
       printf("%d ", cArray[i]);
    }
}


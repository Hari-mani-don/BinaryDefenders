/* print unique element version V1*/

#include<stdio.h>
int unique(int arr[], int n);
#define MAX_SIZE 100
int main(){
     int arr[MAX_SIZE];
    int n;
    printf("Enter Array Size:");
    scanf("%d", &n);
    printf("Enter Array element: ");
    for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
     }
     printf("Unique element of :");
    unique(arr, n);
    return 0;
}

int unique(int arr[], int size){
    for(int i=0;i<size;i++){
        int uniq=1;
        for(int j=0;j<size;j++){
            if(i==j){
                //
            }
            else{
                if(arr[i]==arr[j]){
                    uniq=0;
                }
            }
        }
        if(uniq==1){
            printf("%d ", arr[i]);
        }
    }
}

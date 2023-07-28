#include<stdio.h>
int main(){
    
    int num, count;
    
    printf("how many values do you want to store: ");
    scanf("%d", &num);
    int a[num];
    for(int i=0;i<num;i++){
        scanf("%d", &a[i]);   
    }
   
    

    
    for(int i=0; i<num-1; i++){
        for(int j=i+1;j<num;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
    printf("After array sort:");
    for(int i=0;i<num;i++){
        
            printf(" %d", a[i]);
    }
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    printf("\nArray duplicate count: %d", count);
    return 0;
}

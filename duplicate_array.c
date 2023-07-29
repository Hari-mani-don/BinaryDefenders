#include<stdio.h>
int main(){
    
    int num;
    
    printf("how many values do you want to store: ");
    scanf("%d", &num);
    int a[num];
    int co[num], k=0;
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
    int du[num];
    printf("After array sort:");
    for(int i=0;i<num;i++){
            du[i]=a[i];
            printf(" %d", du[i]);
    }
    

    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(co[k]!=du[i]){
                if(du[i] == du[j]){
                   co[i] = du[i];
                   
                }
            }  
            
        }
     k++;
   
    }
    
    printf("\nArray duplicate print: ");

    for(int i=0;i<k;i++){
    printf(" %d", co[i]);
    }
    
    return 0;

}

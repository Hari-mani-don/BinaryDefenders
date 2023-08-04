    //palindrome

#include<stdio.h>
#define BASE 100
int main(){
    char original[BASE];
    char rev[BASE];
    int n;
    printf("How many values do you want to store: ");
    scanf("%d", &n);
    printf("Enter the characte to check palindrome or not:");
    for(int i=0;i<n;i++){
        scanf(" %c", &original[i]);
    }
    
  
    int count=0, a=n-1;
    
    for(int i=0;i<n;i++){
        rev[i]=original[a];
        a--;
    }
    for(int j=0;j<n;j++){
        if(original[j]==rev[j]){
            count++;
        }
    }
    if(n==count){
        printf("This is palindrome");
    }
    else{
        printf("This is not palindrome");
    }
    return 0;
    
}

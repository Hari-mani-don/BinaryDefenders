/* Write a C program to print Strong numbers between 1 to n. C program to print all strong numbers between 
a given range. Logic to print strong numbers in a given range in C program.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int num, length, sum=1, result=0, temp, temp2;
    printf("Enter the number: ");
    scanf("%d", &num);

    
    for(int i=1;i<=num;i++){
       
        temp=i;
         length=(int)log10(i);
        temp2=temp%10;
        for(int j=0;j<=length;j++){
            for(int k=temp2;k>=1;k--){
                sum*=k;
            }
            
        result+=sum;
        temp/=10;
        temp2=temp%10;
        sum=1;
        }
        
        
        if(result==i){
        printf("%d ", result);
        
    }
    
    result=0;
    }
    
    return 0;
}

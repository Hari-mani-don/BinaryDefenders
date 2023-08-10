/* Write a C program to input binary number from user and find twos complement of the binary number.
How to find 2s complement of a binary number in C. Logic to find twos complement of a binary number in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){
    long n;
    int lenght=7,c=1;
    printf("Enter the number: ");
    scanf("%ld", &n);
    
    int b[lenght];
    int temp=n;
    int temp2=temp%10;
    for(int i=lenght;i>=0;i--){
        
        if(temp2==1 && c==1){
            b[i]=temp2;
            c=0;
        }
        else if(temp2==0 && c==1){
            b[i]=temp2;
        }
        else{
            if(temp2==1){
                b[i]=0;
            }
            else{
                if(temp2==0)
                    b[i]=1;
            }
        }
        temp/=10;
        temp2=temp%10;
    }
    
    
    for(int j=0;j<=lenght;j++){
        printf("%d", b[j]);
    }
    return 0;
}

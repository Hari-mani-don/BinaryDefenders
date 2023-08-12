/* Write a C program to input Hexadecimal number from user and convert it to Octal number system. How to convert Hexadecimal number system to Octal 
number system in C programming. Logic to convert hexadecimal to octal number system in C programming.
*/

#include<stdio.h>
#include<math.h>
#define BASE 16
int main(){
    int a[BASE]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n, sum=0, sum2=0, temp, temp2, length=0, h;
    printf("how many values do you want to print:");
    scanf("%d", &n);
    int b[n];
    char hex[8];
    printf("Enter the hexa Values: ");
    for(int i=0;i<n;i++){
        scanf(" %c", &hex[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<BASE;k++){
            if(hex[j]==a[k]){
                b[j]=k;
                break;
            }
        }
    }
    int p=n-1;
    for(int l=0;l<n;l++){
        sum=b[p] * pow(16, l);
        sum2=sum +sum2;
        p--;
    }
    temp2=sum2;
    while(temp2>=8){
        temp2/=8;
        length++;
        
    }
    h=length-1;
    int c[length];
    while(sum2>=8){
        temp=sum2%8;
        sum2/=8;
        c[h]=temp;
        h--;
    }
    
    printf("%d", sum2);
    for(int m=0;m<length;m++){
        printf("%d", c[m]);
    }
    return 0;
}


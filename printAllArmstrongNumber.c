/* Write a C program to print all Armstrong numbers between 1 to n. How to print Armstrong numbers between given interval
using loop in C program.Logic to print Armstrong numbers in given range in C programming.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int start, end, sum=1, length, temp, temp2, result=0, n;
    printf("Enter the number start and end:  ");
    scanf("%d %d", &start, &end);
    printf("Armstrong Values; ");
    for(int i=start;i<=end;i++){
        temp=i;
        n=i;
        temp2=n%10;
        length=(int)log10(i);
        for(int j=0;j<length+1;j++){
            for(int k=0;k<length+1;k++){
                sum=sum*temp2;
            }
            result=result+sum;
            n/=10;
            temp2=n%10;
            sum=1;
        }
        if(temp==result){
        printf("%d ", result);
        }
        result=0;
        length=0;
    }
    return 0;
}

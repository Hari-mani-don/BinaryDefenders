#include<stdio.h>
int sumOfPrintAllEvenNumber(int start, int end);
int sum=0;
int main(){
    int start, end;
    printf("input start number: ");
    scanf("%d", &start);
    printf("input end number: ");
    scanf("%d", &end);
    
    sumOfPrintAllEvenNumber(start, end);
  return 0;    
}

int sumOfPrintAllEvenNumber(int start, int end){
    if(start > end){
        printf("sum: %d", sum);
        return 0;
    }
    sum+=start;
    sumOfPrintAllEvenNumber(start+2, end);
}

#include<stdio.h>
int main(){
    int angle1, angle2, angle3, sum;
    printf("Enter the angle1: ");
    scanf("%d", &angle1);
    
    printf("Enter the angle2: ");
    scanf("%d", &angle2);
    
    printf("Enter the angle3: ");
    scanf("%d", &angle3);
    
    sum = angle1 + angle2 + angle3;
    if(angle1>0 && angle2>0 && angle3>0){
        if(sum==180){
        printf("\nThe angle is valid ");
      }
        else{
        printf("\nThe angle not valid");
      }
    }   
    return 0;
}

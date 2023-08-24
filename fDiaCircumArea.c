//Function using find Diameter, Circumference and Area of Circle V1

#include<stdio.h>
#define PI 3.14
double circumferenceOfCircle(double r);
double diameterOfCircle(double r);
double areaOfCircle(double r);
int main(){
    float r;
    double c, d, A;
    printf("Enter  radius of Circle: ");
    scanf("%f", &r);
    c=circumferenceOfCircle(r);
    d=diameterOfCircle(r);
    A=areaOfCircle(r);
    printf("Circumference of Circle : %.2f units\n", c);
    printf("Diameter  of Circle : %.2f units\n", d);
    printf("Area  of Circle : %.2f units\n", A);
}

double circumferenceOfCircle(double r){
    return 2*PI*r;
}
double diameterOfCircle(double r){
    return 2*r;
}
double areaOfCircle(double r){
    return PI*(r*r);
}

/* Write a C program to input marks of five subjects
Physics, Chemistry, Biology, Mathematics and Computer, calculate 
percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F 
*/


#include<stdio.h>
int main(){
    int phy, chm, math, comp, bio, total, percent;
    printf("Enter the physics mark: ");
    scanf(" %d", &phy);
    printf("Enter the chemistry mark: ");
    scanf(" %d", &chm);
    printf("Enter the math mark: ");
    scanf(" %d", &math);
    printf("Enter the computer mark: ");
    scanf(" %d", &comp);
    printf("Enter the biology mark: ");
    scanf(" %d", &bio);
    
    total=phy+chm+math+comp+bio;
    printf("total: %d\n", total);
    
    percent=(total/5.0);
    printf("\npercentage: %d\n", percent);
    
    if(percent>=90)
      printf("Grade: 'A'");
    else if(percent>=80)
      printf("Grade: 'B'");
    else if(percent>=70)
      printf("Grade: 'C'");
    else if(percent>=60)
      printf("Grade: 'D'");
    else if(percent>=40)
      printf("Grade: 'E'");
    else if(percent<40)
      printf("Grade: 'F'");
       
    return 0;   
}

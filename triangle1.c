#include<stdio.h>
int main(){
      int num;
      printf("Enter the pyramid limit: ");
      scanf("%d", &num);
      
      for(int row=0;row<num;row++){
          for(int space=0;space<num-row;space++){
              printf(" ");
          }
          for(int col=0;col<=row;col++){
              printf("* ");
          }
          printf("\n");
      }
}



     
    

#include<stdio.h>
int main(){
      int n, digit=0;
      printf("Enter your number:");
      scanf("%d",&n);
      while(n>0){
            n = n/10;
            digit = digit+1;
      }
      printf("digits in your number is/are : %d", digit);
      return 0;
}
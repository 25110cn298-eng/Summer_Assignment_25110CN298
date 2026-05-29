#include<stdio.h>
int main(){
      int n, mul;
      printf("Enter your number: ");
      scanf("%d",&n);
      printf("Multiplication table of a given number: \n");
      for(int i=1; i<=10 ; i++){
            mul = i*n;
            printf("%d X %d = %d", i, n, mul);
            printf("\n");
      }
      return 0;
}
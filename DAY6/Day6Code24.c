
#include<stdio.h>
int main(){
      int n, x, result=1;
      printf("Enter a base: ");
      scanf("%d", &n);
      printf("Enter a exponent: ");
      scanf("%d", &x);
      for(int i=1; i<=n; i++){
            result= result*x;
      }
      printf("%d^%d=%d", n, x, result);
      
      return 0;
}
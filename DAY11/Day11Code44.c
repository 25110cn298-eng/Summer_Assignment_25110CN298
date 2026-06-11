
#include<stdio.h>
int fac(int n){
      int f=1;
      for(int i=1; i<=n; i++){
            f=f*i;
      }
      return f;
}
int main(){
      int n,r;
      printf("Enter your number: ");
      scanf("%d", &n);
      r = fac(n);
      printf("Factorial is: %d", r);
      
      return 0;
}
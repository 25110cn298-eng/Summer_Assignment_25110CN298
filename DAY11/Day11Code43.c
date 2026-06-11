
#include<stdio.h>
int prime(int n){
      int a=0, b=1;
      for(int i=2; i<=n/2; i++){
            if(n%i==0)  return a;
            else return b;
      }
}
int main(){
      int n;
      char r;
      printf("Enter your number: ");
      scanf("%d", &n);
      r = prime(n);
      if(r==0)   printf("NO, %d is not a prime number", n);
      else    printf("YES, %d is a prime number", n);
      return 0;
}
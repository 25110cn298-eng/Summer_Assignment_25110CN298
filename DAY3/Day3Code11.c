
#include<stdio.h>
int main(){
      int a, b, gcd;
      printf("Enter first(smaller) number: ");
      scanf("%d", &a);
       printf("Enter second(larger) number: ");
      scanf("%d", &b);
      printf("GCD between %d and %d is: ", a, b);
      gcd=1;
      for(int i=1; i<=b && i<=a; i++){
            if(b%i==0 && a%i==0) gcd=i;
      }
      printf("%d", gcd);
      return 0;
}
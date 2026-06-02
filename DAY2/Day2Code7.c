
#include<stdio.h>
int main(){
      int n, prod=1, r;
      printf("Enter number n: ");
      scanf("%d",&n);
      while(n>0){
            r= n%10;
            prod= prod*r;
            n=n/10;
      }
      printf("Product is: %d", prod);
      return 0;
}

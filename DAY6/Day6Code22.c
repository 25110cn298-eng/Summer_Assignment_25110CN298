
#include<stdio.h>
#include<math.h>

int main(){
      int n, r, d=0, i=0;
      printf("Enter a binary number: ");
      scanf("%d", &n);
      while(n>0){
           r= n%10;
           d= d+ r*pow(2,i);
           n=n/10;
           i++;
      }
      printf("Ddecimal number: %d", d);
      return 0;
}
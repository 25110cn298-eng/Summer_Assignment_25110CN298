
#include<stdio.h>
int a(int n){
      int r, sum=0;
      while(n>0){
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
      }
      return sum;
}
int main(){
      int n;
      printf("Enter your number: ");
      scanf("%d", &n);
      int b=a(n);
      if(n==b)  printf("%d is an Armstrong number", n);
      else   printf("%d is not an Armstrong number", n);
      
      return 0;
}
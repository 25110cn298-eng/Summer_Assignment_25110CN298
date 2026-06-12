
#include<stdio.h>
int p(int n){
      int r,sum=0;
      while(n>0){
            r=n%10;
            sum=sum*10+r;
            n=n/10;
      }
      return sum;
}

int main(){
      int n,a;
      printf("Enter your number: ");
      scanf("%d", &n);
      a = p(n);
      if(n==a)  printf("YES, It's Palidrome number");
      else  printf("NO, It's not Palidrome number");
      
      return 0;
}

#include<stdio.h>
int main(){
      int n,sum=0,r,b;
      printf("Enter your number: ");
      scanf("%d", &n);
      int a=n;
      while(n>0){
           r=n%10;
           sum= sum+r*r*r;
           n=n/10;
      }
       b=sum;
      if(b==a){
            printf("given number is a ARMSTRONG NUMBER");
      }
      else{
            printf("given number is ..NOT.. a ARMSTRONG NUMBER");
      }
      return 0;
}


#include<stdio.h>
int main(){
      int n;
      printf("Enter palce upto which we have to find fibonacci series: ");
      scanf("%d", &n);
      printf("FOBONACCI SERIES : ");
      int a=0, b=1;
      n=n+2;
      int sum=1;
      for(int i=1; i<=n; i++) {
            a=b;
            b=sum;
            sum=a+b;
            printf("%d ", sum);
      }
      
      return 0;
}
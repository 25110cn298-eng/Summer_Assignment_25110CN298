
#include<stdio.h>
int main(){
      int n;
      printf("Enter Nth place: ");
      scanf("%d", &n);
      printf("Nth FIBONACCI TERM: ");
      int a=0, b=1;
      int sum=0;
      for(int i=1; i<=n ; i++){
            a=b;
            b=sum;
            sum=a+b;
      }
      printf("%d", sum);
      return 0;
}
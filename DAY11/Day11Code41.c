
#include<stdio.h>
int sum(int a, int b){
      int s;
      s=a+b;
      return s;
}
int main(){
      int a,b,r;
      printf("Enter your first number: ");
      scanf("%d", &a);
      printf("Enter your second number: ");
      scanf("%d", &b);
      r = sum(a,b);
      printf("Sum is = %d", r);
      
      return 0;
}
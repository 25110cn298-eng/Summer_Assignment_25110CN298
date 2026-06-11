
#include<stdio.h>
int max(int a, int b){
      if(a<b)  return b;
      else   return a;
}
int main(){
      int a,b,m;
      printf("Enter your first number: ");
      scanf("%d", &a);
      printf("Enter your second number: ");
      scanf("%d", &b);
      m = max(a,b);
      printf("Maximum number is: %d", m);
      
      return 0;
}

#include<stdio.h>
void f(int n){
      int a=0, b=1,c;
      for(int i=1; i<=n; i++){
            c=a+b;
            printf("%d ", c);
            a=b;
            b=c;
      }
      return;
}
int main(){
      int n;
      printf("Enter your number: ");
      scanf("%d", &n);
      f(n);
      
      return 0;
}
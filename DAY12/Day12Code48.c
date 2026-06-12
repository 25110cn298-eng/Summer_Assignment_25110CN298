
#include<stdio.h>
void p(int n){
      int sum=0;
      for(int i=1; i<=n/2; i++){
            if(n%i==0)  sum=sum+i;
      }
      if(sum==n)   printf("YES, %d is a perfect number",n);
      else   printf("NO, %d is not a perfect number",n); 
      
      return;
}
int main(){
      int n;
      printf("Enter your nubmer: ");
      scanf("%d", &n);
      p(n);
      
      return 0;
}
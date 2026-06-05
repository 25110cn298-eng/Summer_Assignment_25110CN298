
#include<stdio.h>
int main(){
      int r,n,l;
      printf("Enter your number: ");
      scanf("%d", &n);
      int sum=0;
      l=n;
      for(int i=1; i<l; i++){
            if(l%i==0)  sum=sum +i;
      }
      if(sum==n)   printf("%d is a perfect number....", n);
      else   printf("%d is not a perfect number....", n);
      return 0;
}
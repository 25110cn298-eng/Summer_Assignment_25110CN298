
#include<stdio.h>
int main(){
      int n, a=1;
      printf("Enter number n: ");
      scanf("%d", &n);
      for(int i=1; i<=n/2; i++){
            if(n%i==0) a=0;
      }
      if(a=1)
       printf(" number is PRIME NUMBER");
       else printf(" number is not PRIME NUMBER");
      return 0;
}
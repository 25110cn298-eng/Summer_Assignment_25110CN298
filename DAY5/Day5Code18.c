
#include <stdio.h>
int main(){
      int n,l,r;
      printf("Enter your number: ");
      scanf("%d",&n);
           int sum=0;
           if(n==0) {
                 sum!=n;
                 printf("%d is not a strong number", n);
           }
           else{
           l=n;
           while(l>0) {
                 r=l%10;
                 int fac=1;
                  for(int j=1; j<=r; j++){
                        fac=fac*j;
                  }
                  sum=sum+fac;
                  l=l/10;
           }
             
         if(sum==n)  printf("%d is a strong number", n);
         else    printf("%d is not a strong number", n);
           }
      return 0;
}

#include<stdio.h>
int main(){
      int a, b, r,sum, n,l;
      printf("Enter starting number: ");
      scanf("%d", &a);
      printf("Enter ending number: ");
      scanf("%d", &b);
      printf("Armstrong number in a range is/are: ");
      for(int i=a; i<=b; i++){
            sum=0;
            n=i;
            while(n>0){
           r=n%10;
           sum=sum+r*r*r;
           n=n/10;
            } 
           if(sum==i)
                 printf("%d ", i);
           
      }
      return 0;
}

#include<stdio.h>
int main(){ 
      int n,largest;
      printf("Enter your number: ");
      scanf("%d", &n);
      printf("Largest prime factor is: ");
      for(int i=2; i<=n; i++){
            while(n%i==0){
                  largest=i;
                  n=n/i;
            }
      }
      printf("%d", largest);
      return 0;
}
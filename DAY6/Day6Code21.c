
#include<stdio.h>
int main(){
      int n, i=0;
      printf("Enter your decimal number: ");
      scanf("%d", &n);
      printf("Binary Number: ");
      int bin[30];
      while(n>0){
            bin[i]=n%2;
            n=n/2;
            i++;
      }
      for(int j=i-1; j>=0; j--){
            printf("%d", bin[j]);
      }
      return 0;
}
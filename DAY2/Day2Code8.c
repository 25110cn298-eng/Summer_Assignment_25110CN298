
#include<stdio.h>
int main(){
      int n, rev=0, r;
      printf("TO CHECK PALIDROME NUMBER: ");
      printf("Enter n : ");
      scanf("%d", &n);
      int a=n;
      while(n>0){
             r=n%10;
            rev=rev*10 +r;
            n= n/10;
      }
      if(a==rev) printf("your number is PALIDROME NUMBER");
      else  printf("your number is not PALIDROME NUMBER");
      return 0;
}

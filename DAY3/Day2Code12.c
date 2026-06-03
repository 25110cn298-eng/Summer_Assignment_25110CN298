
#include<stdio.h>
int main(){
      int a,b,c;
      printf("Enter first number: ");
      scanf("%d", &a);
      printf("Enter second number: ");
      scanf("%d", &b);
      printf("LCM of %d and %d is: ", a,b);
      for(int i=1; ; i++){
            if(i%a==0 && i%b==0){
                  printf("%d",i);
                  break;
            }
      }
      return 0;
}
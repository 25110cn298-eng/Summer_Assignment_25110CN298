
#include<stdio.h>
int main(){
      int n;
      printf("Enter your number: ");
      scanf("%d", &n);
      int a=n;
      for(int i=1; i<=n; i++){
            for(int j=a-1; j>=1; j--){
            printf("  ");
            }
            a--;
            for(int j=1; j<=i; j++){
                  printf("%c ", j+64);
            }
            int b=i;
            for(int j=1; j<=i-1; j++){
                  printf("%c ", b+63);
                  b--;
            }
            printf("\n");
      }
      return 0;
}
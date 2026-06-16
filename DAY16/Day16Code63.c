
#include<stdio.h>
int main(){
      int n,b,c;
      printf("Enter your number: ");
      scanf("%d", &n);
      int a[9]={1,2,3,4,5,6,7,8,9};
      for(int i=0; i<9; i++){
             b=i;
            for(int i=1; i<9; i++){
                  if(b+i==n)  printf("(%d,%d) ", b,i);
            }
      }
      
      return 0;
}
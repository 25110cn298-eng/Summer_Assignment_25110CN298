
#include<stdio.h>
int main(){
      int str, end, a;
      printf("Enter first number: ");
      scanf("%d", &str);
      printf("\nEnter second number: ");
      scanf("%d", &end);
      printf("PRIME NUMBERS b/w %d and %d : ", str, end);
      for(int i=str; i<=end; i++){
            a=1;
            if(i<2){
                  printf("INVALID NUMBER");
                  break;
            } 
            
            else{
            for(int j=2; j<=i/2; j++){
                  if(i%j==0)  a=0;
            }
           
            if(a==1) printf("%d ", i);
            }
      }
      return 0;
}
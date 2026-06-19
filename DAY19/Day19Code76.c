
#include<stdio.h>
int main(){
      int a[10][10], r, c, sum=0;
      printf("Enter number of rows:");
      scanf("%d", &r);
      printf("Enter number of columns:");
      scanf("%d", &c);
      if(r==c){
            printf("Enter elements of your arrays: ");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d", &a[i][j]);
            }
      }
      printf("Your array is:\n");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  printf("%d ", a[i][j]);
            }
            printf("\n");
      }
      printf("Sum of diagonal elements is: ");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  if(i==j)  sum+=a[i][j];            }
      }
      printf("%d", sum);
  }
  else  printf("your number of rows and columns needs to be equal");
      return 0;
}
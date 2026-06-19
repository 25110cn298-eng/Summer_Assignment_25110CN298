
#include<stdio.h>
int main(){
      int a[10][10],r,c, b[10][10];
      printf("Enter number of rows: ");
      scanf("%d", &r);
      printf("Enter number of column: ");
      scanf("%d", &c);
      printf("Enter elements of array: ");
      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  scanf("%d", &a[i][j]);
            }
      }
      printf("m Your matrix is:\n");
       for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  printf("%d ", a[i][j]);
            }
            printf("\n");
      }
      printf("Transpose of matrix is:\n");
       for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                  b[j][i]=a[i][j];
            }
      }
       for(int i=0; i<c; i++){
            for(int j=0; j<r; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
      }
      return 0;
}
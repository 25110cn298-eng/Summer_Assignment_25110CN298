
#include<stdio.h>
int main(){
      int n , arr[100], sum=0;
      printf("Enter number of elements: ");
      scanf("%d", &n);
      printf("Enter your elements: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      printf("Sum of array: ");
      for(int i=0; i<n; i++){
            sum=sum+arr[i];
      }
      printf("%d", sum);
      printf("\nAverage of array: ");
      float b= (float)sum/n;
      printf("%f", b);
      return 0;
}
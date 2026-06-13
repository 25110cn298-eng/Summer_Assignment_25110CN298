
#include<stdio.h>
int main(){
      int arr[100];
      int n, Odd_sum=0, Even_sum=0;
       printf("Enter number of elements: ");
      scanf("%d", &n);
      printf("Enter your elements: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      printf("Number of Odd and Even elements are: ");
      for(int i=0; i<n; i++){
            if(arr[i]%2==0)  Even_sum++;
            else  Odd_sum++;
      }
      printf("%d and %d", Odd_sum, Even_sum);
      
      return 0;
}
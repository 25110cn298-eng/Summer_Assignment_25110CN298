
#include<stdio.h>
int main(){
      int n , arr[100], max, min;
      printf("Enter number of elements: ");
      scanf("%d", &n);
      printf("Enter your elements: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
       max=min=arr[0];
      for(int i=0; i<n; i++){
            if(max<arr[i])   max=arr[i];
            if(min>arr[i])   min=arr[i];
      }
       printf("Largest element is: %d \n", max);
       printf("Smallest element is: %d ", min);
      return 0;
}
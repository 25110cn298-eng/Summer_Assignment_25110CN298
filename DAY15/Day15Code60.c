#include <stdio.h>
int main(){
      int arr[100], n;
      printf("Enter the number of elements: ");
      scanf("%d", &n);
      printf("Enter your elements: ");
      for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
      }
      printf("Array after moving zeroes to the end: ");
      int count=0;
      for(int i = 0; i < n; i++){
        if(arr[i] != 0)  printf("%d ", arr[i]);
        else count++;
      }
      for(int i=0; i<count; i++){
            printf("0 ");
      }
    return 0;
}
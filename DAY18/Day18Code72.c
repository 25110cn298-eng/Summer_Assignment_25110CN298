
#include<stdio.h>
int main(){
      int arr[100], n, b;
      printf("Enter number of array: ");
      scanf("%d", &n);
      printf("ENter your array: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                  if(arr[i]<arr[j]){
                        b=arr[i];
                        arr[i]=arr[j];
                        arr[j]=b;
                  }
            }
      }
      printf("Array in descending order is: ");
      for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
      }
      return 0;
}
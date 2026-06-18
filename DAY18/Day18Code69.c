
#include<stdio.h>
int main(){
      int arr[100],n,b;
      printf("Enter number of elements of the array: ");
      scanf("%d", &n);
      printf("Enter your arraay: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                  if(arr[j]>arr[j+1]){
                    b=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=b;
                  }
            }
      }
      printf("Your sorted array is: ");
      for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
      }
      return 0;
}
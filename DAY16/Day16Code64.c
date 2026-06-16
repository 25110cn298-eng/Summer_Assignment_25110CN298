
#include<stdio.h>
int main(){
      int arr[100], n;
      printf("Enter the number of elements: ");
      scanf("%d", &n);
      printf("Enter elements:\n", n);
      for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
      }
      printf("Array after removing duplicate elements: ");
      for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                        for(int k=j; k<n-1; k++){
                              arr[k]=arr[k+1];
                        }
                        n--;
                        j--;
                  }
            }
      }
      for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
      }
      return 0;
}

#include<stdio.h>
int main(){
      int arr[100], n, b, m;
      printf("Enter elements of the array: ");
      scanf("%d", &n);
      printf("Enter your array: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      for(int i=0; i<n-1; i++){
            m=i;
            for(int j=i+1; j<n; j++){
                  if(arr[j]<arr[m]){
                        m=j;
                  }
            }
            b=arr[i];
            arr[i]=arr[m];
            arr[m]=b;
      }
      printf("Your sorted array is: ");
      for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
      }
      return 0;
}
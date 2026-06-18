
#include<stdio.h>
int main(){
      int arr[100], n, m;
      printf("Enter size of your array: ");
      scanf("%d", &n);
      printf("Enter your array: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
      printf("Enter element to search: ");
      scanf("%d", &m);
      int low, high, mid;
      low=0;
      high=n-1;
      while(low<=high){
            mid=(low+high)/2;
      if(arr[mid]==m){
            printf("Element found at %d", mid+1);
            return 0;
      }
      else if(low<m) low=mid+1;
      else  high=mid-1;
      }
      printf("Element not found");
      return 0;
}
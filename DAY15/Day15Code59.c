
#include<stdio.h>
int main(){
      int n,arr[100],a, temp;
      printf("Enter number of elements: ");
      scanf("%d", &n);
      printf("Enter elements of your array: ");
      for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
      }
       printf("TO ROTATE ARRAY LEFT:\n ");
       printf("Enter number: ");
       scanf("%d", &a);
       for(int j=1; j<=a; j++){
      temp=arr[n-1];
      for(int i=n-1; i>0; i--){
            arr[i]=arr[i-1];
      }
      arr[0]=temp;
       }
      printf("Reversed array is: ");
      for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
      }
      
      return 0;
}
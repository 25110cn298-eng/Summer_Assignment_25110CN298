
#include<stdio.h>
int main(){
      int arr[9]={2,3,4,5,6,7,8,9,4};
      printf("Duplicate elements are: ");
      for(int i=0; i<9; i++){
            for(int j=i+1; j<9; j++){
                  if(arr[i]==arr[j]){
                        printf("%d", arr[i]);
                        break;
                  }
            }
      }
      
      return 0;
}
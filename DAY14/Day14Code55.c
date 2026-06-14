
#include<stdio.h>
int main(){
      int arr[9]={2,3,4,5,6,7,8,9,33};
      int largest, secondLargest;
      largest=secondLargest=arr[0];
      for(int i=0; i<9; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
     }
      printf("Second Largest Element = %d", secondLargest);

    return 0;
}
      
  


#include <stdio.h>
int main(){
    int arr[100], n, a, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter your element: ");
    scanf("%d", &a);
    for(int i = 0; i < n; i++){
        if(arr[i] == a)
            count++;
    }
    printf("Frequency of %d = %d", a , count);

    return 0;
}
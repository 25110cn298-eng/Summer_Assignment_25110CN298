
#include <stdio.h>
int main(){
    int arr[100], n;
    int sum = 0, d, missing;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n", n - 1);
    for(int i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    d = n * (n + 1) / 2;
    missing = d - sum;
    printf("Missing number = %d", missing);

    return 0;
}

#include <stdio.h>
int main(){
    int a[10], n, choice, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Display Array");
    printf("\n2. Sum of Elements");
    printf("\n3. Find Maximum");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Array Elements: ");
            for(int i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(int i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d", sum);
            break;

        case 3:{
            int max = a[0];
            for(int i = 1; i < n; i++){
                if(a[i] > max)
                    max = a[i];
            }
            printf("Maximum = %d", max);
            break;
        }
        default:
            printf("Invalid Choice");
    }

    return 0;
}
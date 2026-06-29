
#include <stdio.h>
struct Item{
    int id;
    char name[30];
    int quantity;
};
int main(){
    struct Item item[10];
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\nEnter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);
    }
    printf("\n----- Inventory Details -----\n");
    for(int i = 0; i < n; i++){
        printf("\nItem ID : %d", item[i].id);
        printf("\nItem Name : %s", item[i].name);
        printf("\nQuantity : %d\n", item[i].quantity);
    }
    return 0;
}
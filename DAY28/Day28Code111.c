
#include <stdio.h>
int main(){
    int tickets;
    float price = 200, total;

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    total = tickets * price;
    
    printf("\n----- Ticket Details -----\n");
    printf("Ticket Price : Rs. %.2f\n", price);
    printf("Tickets      : %d\n", tickets);
    printf("Total Amount : Rs. %.2f\n", total);

    return 0;
}
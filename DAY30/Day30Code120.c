
#include <stdio.h>
#include <string.h>

char name[10][30];
int tickets[10];
int n;
void input(){
    printf("Enter number of customers: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\nEnter Customers Name: ");
        scanf("%s", name[i]);
        printf("Enter Number of Tickets: ");
        scanf("%d", &tickets[i]);
    }
}
void display(){
    printf("\n----- Booking Details -----\n");
    for(int i = 0; i < n; i++){
        printf("\nCustomer Name : %s", name[i]);
        printf("\nTickets       : %d", tickets[i]);
        printf("\nTotal Amount  : Rs. %d\n", tickets[i] * 200);
    }
}
void search(){
    char s[30];
    printf("Enter Customer Name: ");
    scanf("%s", s);
    for(int i = 0; i < n; i++){
        if(strcmp(name[i], s) == 0){
            printf("\nBooking Found");
            printf("\nCustomer Name : %s", name[i]);
            printf("\nTickets       : %d", tickets[i]);
            printf("\nTotal Amount  : Rs. %d\n", tickets[i] * 200);
            return;
        }
    }
    printf("Booking Not Found\n");
}
int main(){
    int choice;
    do{
        printf("\n===== MOVIE TICKET BOOKING SYSTEM =====");
        printf("\n1. Book Tickets");
        printf("\n2. Display Bookings");
        printf("\n3. Search Booking");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } 
    while(choice != 4);

    return 0;
}
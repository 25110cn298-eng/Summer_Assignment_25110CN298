
#include <stdio.h>
int main(){
    int accNo;
    char name[30];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("\nEnter Deposit Amount: ");
    scanf("%f", &deposit);
    balance = balance + deposit;

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance = balance - withdraw;
    else
        printf("Insufficient Balance!\n");

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", accNo);
    printf("Name           : %s\n", name);
    printf("Final Balance  : %.2f\n", balance);

    return 0;
}
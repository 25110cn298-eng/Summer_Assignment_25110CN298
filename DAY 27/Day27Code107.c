
#include <stdio.h>
int main(){
    int empid[20], basic[20], total[20];
    int n = 0, ch;
    do{
        printf("\n1. Add Employee");
        printf("\n2. Display Salary");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empid[n]);
                printf("Enter Basic Salary: ");
                scanf("%d", &basic[n]);
                total[n] = basic[n] + (basic[n] * 20 / 100); // 20% Bonus
                n++;
                break;

            case 2:
                printf("\nID\tBasic\tTotal Salary\n");
                for(int i = 0; i < n; i++){
                    printf("%d\t%d\t%d\n", empid[i], basic[i], total[i]);
                }
                break;

            case 3:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!");
        }
    } 
    while(ch != 3);
    return 0;
}
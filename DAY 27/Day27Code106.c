
#include <stdio.h>
int main(){
    int id[20], salary[20];
    int n = 0, ch, e, found;
    do{
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);
                printf("Enter Salary: ");
                scanf("%d", &salary[n]);
                n++;
                break;

            case 2:
                printf("\nID\tSalary\n");
                for(int i = 0; i < n; i++)
                    printf("%d\t%d\n", id[i], salary[i]);
                break;

            case 3:
                found = 0;
                printf("Enter Employee ID to Search: ");
                scanf("%d", &e);
                for(int i = 0; i < n; i++){
                    if(id[i] == e){
                        printf("\nEmployee Found\n");
                        printf("ID = %d\n", id[i]);
                        printf("Salary = %d\n", salary[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee Not Found");
                break;

            case 4:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!");
        }
    } 
    while(ch != 4);
    return 0;
}
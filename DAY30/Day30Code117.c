
#include <stdio.h>
int main(){
    int roll[10], marks[10], n;
    char name[10][30];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
    printf("\n----- Student Records -----\n");
    for(int i = 0; i < n; i++){
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }

    return 0;
}
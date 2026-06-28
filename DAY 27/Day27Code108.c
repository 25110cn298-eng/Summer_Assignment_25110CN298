
#include <stdio.h>
int main(){
    int m1, m2, m3, total;
    float per;
    int ch;
    do{
        printf("\n1. Generate Marksheet");
        printf("\n2. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter Marks of 3 Subjects: ");
                scanf("%d%d%d", &m1, &m2, &m3);
                total = m1 + m2 + m3;
                per = total / 3.0;
                printf("\n----- MARKSHEET -----\n");
                printf("Subject 1 : %d\n", m1);
                printf("Subject 2 : %d\n", m2);
                printf("Subject 3 : %d\n", m3);
                printf("Total     : %d\n", total);
                printf("Percentage: %.2f\n", per);
                if(per >= 40)
                    printf("Result    : PASS\n");
                else
                    printf("Result    : FAIL\n");
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } 
    while(ch != 2);
    return 0;
}
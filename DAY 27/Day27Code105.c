
#include <stdio.h>
int main(){
    int roll[20], marks[20], n = 0;
    int ch, r, found;
    do{
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll[n]);
                printf("Enter Marks: ");
                scanf("%d", &marks[n]);
                n++;
                break;

            case 2:
                printf("\nRoll\tMarks\n");
                for(int i = 0; i < n; i++)
                    printf("%d\t%d\n", roll[i], marks[i]);
                break;

            case 3:
                found = 0;
                printf("Enter Roll No to Search: ");
                scanf("%d", &r);
                for(int i = 0; i < n; i++){
                    if(roll[i] == r){
                        printf("Student Found\n");
                        printf("Roll = %d\n", roll[i]);
                        printf("Marks = %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student Not Found\n");
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice");
        }
    } 
    while(ch != 4);
    return 0;
}
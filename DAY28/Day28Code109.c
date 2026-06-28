
#include <stdio.h>
struct Book{
    int id;
    char name[30];
};
int main(){
    struct Book b[10];
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);
        printf("Enter Book Name: ");
        scanf(" %s", b[i].name);
    }
    printf("\nLibrary Records:\n");
    for(int i = 0; i < n; i++){
        printf("ID: %d\tBook: %s\n", b[i].id, b[i].name);
    }

    return 0;
}
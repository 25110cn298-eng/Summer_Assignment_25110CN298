
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[50], temp;
    int choice, l= 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n1. Find Length");
    printf("\n2. Reverse String");
    printf("\n3. Convert to Uppercase");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            while(str[l] != '\0')
                l++;
            printf("Length = %d", l);
            break;

        case 2:
            while(str[l] != '\0')
                l++;
            for(int i = 0; i < l/2; i++){
                temp = str[i];
                str[i] = str[l-i-1];
                str[l-i-1] = temp;
            }
            printf("Reversed String = %s", str);
            break;

        case 3:
            for(int i = 0; str[i] != '\0'; i++){
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase String = %s", str);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
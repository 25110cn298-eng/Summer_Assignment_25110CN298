
#include <stdio.h>
#include <string.h>
int main(){
    char str[100], longest[100];
    int len = 0, max = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; ; i++){
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n'){
            len = i - start;
            if(len > max){
                max = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
    }
    printf("Longest word = %s", longest);
    return 0;
}
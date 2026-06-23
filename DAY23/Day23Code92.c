
#include <stdio.h>
int main(){
    char s[100];
    int freq[256] = {0};
    int max = 0;
    char ch;
    printf("Enter a string: ");
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++){
        freq[s[i]]++;
        if(freq[s[i]] > max){
            max = freq[s[i]];
            ch = s[i];
        }
    }
    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d", max);

    return 0;
}
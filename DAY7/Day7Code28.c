
#include <stdio.h>
int r=0;
int rev(int n){
    if(n == 0)   return 0;
    r=r*10+n%10;
    rev(n/10);
    return r;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed Number = %d", rev(n));
    
    return 0;
}
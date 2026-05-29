/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n ,sum=0;
    printf("To calculate sum of first N natural numbers: ");
    printf("\n Enter your number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum= sum+i;
    }
    printf(" Sum is: %d", sum);

    return 0;
}
#include<stdio.h>
int main(){
  int n, sum;
printf("Enter number upto which we have to find sum : );
    scanf("%d", &n);
for(int i=1 ; i<=n ; i++){
sum=1;
sum=sum+i;
printf("sum is : %d", sum);
}
return 0;
}

#include<stdio.h>
void main(){
int i, fact=1, n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact*=i;
}
printf("Factorial is: %d",fact);
}

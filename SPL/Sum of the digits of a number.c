#include<stdio.h>
void main(){
int i, sum=0, rem, temp, n;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n!=0){
    rem=n%10;
    sum+=rem;
    n=n/10;

}
printf("The sum of digits is: %d",sum);


}

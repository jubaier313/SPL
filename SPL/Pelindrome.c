#include<stdio.h>
void main(){
int i, rev=0, rem, temp, n;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

}
printf("The reverse number is: %d",rev);
if(rev==temp){
    printf("\n%d is palindrome number",rev);
}
else{
    printf("\nIt is not a palindrome number");
}
}

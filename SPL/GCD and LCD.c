#include<Stdio.h>
void main(){
int i,n1,n2,gcd,lcd;
printf("Enter two number:");
scanf("\n%d%d",&n1,&n2);
for(i=1; i<=n1&&n2; i++){
    if(n1%i==0&&n2%i==0){
        gcd=i;
    }
}
lcd=(n1*n2)/gcd;
printf("GCD is: %d \nLCD is: %d", gcd, lcd);
}

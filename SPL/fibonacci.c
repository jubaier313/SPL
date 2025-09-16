#include<stdio.h>
void main(){
int i, n,f0=0, f1=1, f;
printf("Enter number:");
scanf("%d",&n);
printf("Fibonacci series is:");
printf("%d, %d",f0,f1);
for(i=0; i<n-1; i++){
    f=f0+f1;
    printf(" ,%d",f);
    f0=f1;
    f1=f;
}

}

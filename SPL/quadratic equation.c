#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d;
float x1,x2;
printf("Enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d<0){
    printf("Roots are imaginary number");
    printf("\nx1 is:%.2f", x1=(-b+sqrt(d))/(2*a));
    printf("\nx2 is:%.2f", x2=(-b-sqrt(d))/(2*a));
}
else if(d==0){
    printf("Roots are equal number");
    printf("\nx1 is:%.2f", x1=(-b+sqrt(d))/(2*a));
    printf("\nx2 is:%.2f", x2=(-b-sqrt(d))/(2*a));
}
else{
    printf("Roots are normal number");
    printf("\nx1 is:%.2f", x1=(-b+sqrt(d))/(2*a));
    printf("\nx2 is:%.2f", x2=(-b-sqrt(d))/(2*a));

}
}

#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c){
printf("a=%d is the largest value",a);
}
else if(b>a&&b>c){
    printf("b=%d is the largest value",b);
}
else if(c>a&&c>b){
    printf("c=%d is the largest value",c);
}
return 0;
}

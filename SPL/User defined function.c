#include<stdio.h>
float area(){
    float a,b, area;
printf("Enter the value of a and b:");
scanf("%f%f",&a,&b);
area=a*b;
return area;
}
void main(){
float c;
c=area();
printf("Area is: %.2f",c);

}

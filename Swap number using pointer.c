#include<stdio.h>
void swap(int *x, int *y){
    int t;
   t=*x;
   *x=*y;
   *y=t;

}

void main(){
int a=1, b=2;
printf("Before swapping:\n a=%d\n b=%d\n",a,b);
swap(&a, &b);
printf("After swapping:\n");
printf(" a=%d\n b=%d",a,b);
}

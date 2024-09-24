#include<stdio.h>
int main () {

    int a;
    printf("ENTER YOUR FIRST NUMBER: ");
    scanf("%d",&a);

    int b;
    printf("enter your second number: ");
    scanf("%d",&b);

    int *x=&a;
    int *y=&b;

    printf("a=%d b=%d a+b=%d",*x,*y,*x+*y);
    

    return 0;
}
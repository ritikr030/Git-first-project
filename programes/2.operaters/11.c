//11.	Write a C program to find the maximum of three integers using ternary operator.

#include<stdio.h>
int main () {
  
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
     
    int b;
    printf("enter your 2number: ");
    scanf("%d",&b);
     
    int c;
    printf("enter your 3number: ");
    scanf("%d",&c);
     
      (a>b  && a>c ) ? printf("%d is max",a):  
      (b>a  && b>c ) ? printf("%dis max",b) :
      (c>a && c>b ) ? printf("%d is max",c):
      printf("invalid");



    return 0;
}
//6.	Write a C program to check whether a given integer is a prime number or not using if-else Statement.

#include <stdio.h>

int main (){

  int a;
  printf("enter your number: ");
  scanf("%d",&a);

  if (a%1!=0 && a%a!=0){
    printf("prime");

  }else{
    printf("not prime");
  }

    return 0;
}
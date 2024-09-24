//4.Write a program to take a number from user and print that number 100 times.

#include <stdio.h>
int main ( ) {

  int i=1;

  int n;
  printf("enter your number: ");
  scanf("%d",&n);

  for (i;i<=n;i++ ){
    printf("%d.",i);
    printf("%d\n",n);
  }

    return 0;
}
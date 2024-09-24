/*
4.Write a program to take a number from user and find first and last digit of that number.
*/

#include <stdio.h>
int main () {

  int n;
  printf("enter your number: ");
  scanf("%d",&n);

  int last=n%10;

  

  while(n>=10){

    n=n/10;
  }

  int first=n;

  printf("last digit=%d\n",last);
  printf("first digit=%d",first);
    


    return 0;
}
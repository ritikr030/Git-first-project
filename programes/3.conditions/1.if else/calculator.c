//4.	Write a C program to check whether a given integer is a multiple of 3 using if-else statement.

#include <stdio.h>

int main () {

      int a;
      printf("enter your num: ");
      scanf("%d",&a);
      
      int b;
      printf("enter your 2 num: ");
      scanf("%d",&b);

      char x;
      scanf(" %c",&x);


      switch(x) {

      case '+':
      printf("%d",a+b);
      break;

      case '-':
      printf("%d",a-b);
      break;
     
      case '*':
      printf("%d",a*b);
      break;

      case '/':
      printf("%d",a/b);
      break;



  

      }





     
    return 0;
}
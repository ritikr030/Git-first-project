//1.	Write a C program to check whether a given integer is even or odd using if-else Statement.

#include <stdio.h>
int main () {

      int a;
      printf("enter your number: ");
      scanf("%d",&a);

         if (a%2==0){
          printf("%d is even",a);
         }
         else {

            printf("%d is odd",a);

        }

    return 0;
}
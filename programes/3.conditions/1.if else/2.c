//2.	Write a C program to find the maximum of two integers using if-else statement


#include <stdio.h>
int main () {

       int a;
       printf("enter your number: ");
       scanf("%d",&a);

       int b;
       printf("enter your 2number: ");
       scanf("%d",&b);

         if (a>b){
          printf("%d  is greater ",a);
         }
         else {

            printf("%d  is greater than  ",b);

        }

    return 0;
}
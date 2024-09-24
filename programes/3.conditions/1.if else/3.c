//3.	Write a C program to check whether a given integer is positive, negative or zero using if-else statement.

#include <stdio.h>
int main () {
    
     int a;
     printf("enter your number ");
     scanf("%d",&a);

         if (a>0) {
         printf("positive");
         }
         else if (a<0){
            printf ("negative");
         }
         else {
         printf("zero");
          }

    return 0;
}
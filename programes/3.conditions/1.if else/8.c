//8.	Write a C program to check whether a given integer is divisible by both 3 and 5 using if-else statement.

#include <stdio.h>
int main () {

    int a;
    printf("enter your number: ");
    scanf("%d",&a);

    if (a%3==0 && a%5==0){
        printf(" divisible by 3 and 5");
      } 
      else{

        printf("not div");
      }    
    return 0;
}
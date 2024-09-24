//9.Write a program to take a number from user and print the factorial of given number


#include <stdio.h>
int main () {

    int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int fact=1;

    for (;i<=n;i++){

        fact=fact*i;
    }

     printf("%d",fact);

    return 0;

}
 //1. Write a C program to find the largest of three numbers using nested if-else statements.

#include <stdio.h>
int main () {

    int a;
    printf("enter your number: ");
    scanf ("%d",&a);

    int b;
    printf("enter your 2 number: ");
    scanf ("%d",&b);

    int c;
    printf("enter your 3 number: ");
    scanf ("%d",&c);

       if (a>b && a>c){

        printf("%d is greater ",a);

    } else {

        if (b>c && b>a){
            printf("%d is greater",b);
        }
        else {
            printf("%d is greater",c);
        }
    }


    return 0;
}
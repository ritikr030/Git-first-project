//4.	Write a C program to check whether a given integer is a multiple of 3 using if-else statement.

#include <stdio.h>
int main () {


    int a;
    printf("enter your number: ");
    scanf("%d",&a);

    if(a%3==0){
        printf("divisible by 3");
    }else {
        printf("not divisible by 3");

    }


    return 0;
}
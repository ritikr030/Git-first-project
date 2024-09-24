//Q2. Write a program to call a function that returns the addition of two numbers and print the result.

#include<stdio.h>
 int  add(int a,int b ) {
    int sum=a+b;
    printf("sum=%d",sum);
    return sum;
}

 int main ( ){

    int first;
    printf("enter your first number: ");
    scanf("%d",&first);

    int second;
    printf("enter your second number: ");
    scanf("%d",&second);

    add(first,second);

    return 0;
}
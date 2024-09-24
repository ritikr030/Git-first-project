//8.Write a program to take a number from user and print the sum of 1 to that number

#include <stdio.h>
int main () {

    int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int sum=0;

    for (;i<=n;i++){

        sum=sum+i;

    }

     printf("%d",sum);

    return 0;

}
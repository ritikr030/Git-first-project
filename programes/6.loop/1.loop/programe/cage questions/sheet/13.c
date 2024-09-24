//13.Write a program to take two number from user and find average of all number present between them.

#include <stdio.h>
int main () {
    int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int sum=0;

    int avg=0;


    for(i;i<=n;i++){

        sum=sum+i;

      int avg=sum/n;
        printf("%d",avg);
    }

    
    return 0;
}
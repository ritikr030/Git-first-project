//19.Write a program to take a number from user and reverse that number.

#include<stdio.h>
int main () {
    int r=0;

    int rem=0;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        r=r*10+rem;
        n=n/10;
        
    }
    printf("%d",rem);
    return 0;
}
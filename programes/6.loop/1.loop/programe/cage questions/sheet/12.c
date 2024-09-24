/*
12.Write a program to take two number from user and print count of number present
between them.

*/

#include <stdio.h>
int main () {
    
    int i,count=1;
    printf("enter your 1st number: ");
    scanf("%d",&i);

    int n;
    printf("enter your 2nd number: ");
    scanf("%d",&n);
    
    for (;i<=n;i++){
        count++;
        n=n/10;
    }
    printf("%d",count);
   
 return 0;
}
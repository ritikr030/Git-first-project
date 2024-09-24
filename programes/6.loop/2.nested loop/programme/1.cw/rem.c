
#include<stdio.h>
 int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    while(n!=0){
        n=n%10;
        printf("%d",n);
    }
    return 0;

 }
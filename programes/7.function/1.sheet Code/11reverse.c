#include<stdio.h>

void rev(int n){

    int rem=0,rev=0;

    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    printf("rev=%d ",rev);
    return ;
 }


int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    rev(n);

    return 0;
}
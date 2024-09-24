#include<stdio.h>

int count(int n){

    if(n==0){
        return n;
    }

       int c=n%10;

        n=n/10;

        return c;
}

int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

        int b=count(n);

        printf("%d",b);

    return 0;

}
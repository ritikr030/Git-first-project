#include<stdio.h>

void fib(int n){
    
    int a=0;
    int b=1;
    int sum=0;

    for(a;a<n;a++){

        printf("%d",sum);

        a=b;
        b=sum;
        sum=a+b;
    }

}


int main () {

    // int i;
    // printf("enter your number: ");
    // scanf("%d",&i);

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    return 0;
}


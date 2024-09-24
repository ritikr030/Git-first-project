#include<stdio.h>
int mult(int a,int b){

    int multi=a*b;

    printf("%d",multi);

    return multi;
}

int main () {

    int f;
    printf("enter your number: ");
    scanf("%d",&f);

    int s;
    printf("enter your number: ");
    scanf("%d",&s);

    mult(f,s);

    return 0;
}
#include<stdio.h>
int main () {

    int a;
    printf("enter your first number : ");
    scanf("%d",&a);

    int b;
    printf("enter your second number : ");
    scanf("%d",&b);

    int *x=&a;
    int *y=&b;

    if(*x>*y){
        printf("%d is max",*x);
    }else{
        printf("%d is max",*y);
    }

    return 0;
}
#include<stdio.h>
void swap(int *x,int *y){

    int temp=*x;
    *x=*y;
    *y=temp;
    return ;
}

int main () {

    int a;
    printf("ENTER YOUR FIRST NUMBER: ");
    scanf("%d",&a);

    int b;
    printf("enter your second number: ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("a=%d b=%d",a,b);
    

    return 0;
}
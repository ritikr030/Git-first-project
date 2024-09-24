#include<stdio.h>

int sub(int a,int b){
    int sub=a-b;

    printf("%d",sub);

    return sub;
}

int main () {

    int f;
    printf("enter your first number : ");
    scanf("%d",&f);

    int s;
    printf("enter your second number: ");
    scanf("%d",&s);

    sub(f,s);

    return 0;
}
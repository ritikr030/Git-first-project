
#include<stdio.h>

int power(int b,int p){

    if(p==0) return 1;

    int po=b*power(b,p-1);

    return po;
}

     

int main (){

    int b;
    printf("enter your base: ");
    scanf("%d",&b);

    int p;
    printf("enter your power: ");
    scanf("%d",&p);

    int pow=power(b,p);

    printf("%d",pow);

    return 0;
}
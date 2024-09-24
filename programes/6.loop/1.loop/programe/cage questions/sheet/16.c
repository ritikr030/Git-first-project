//16.Write a program to take two number from user one as a base ,second as a power calculate and print

#include<stdio.h>
int main (){
    int i=1;

    int b;
    printf("enter your base:");
    scanf("%d",&b);

    int p;
    printf("enter your power: ");
    scanf("%d",&p);

    int result=1;

    for(i;i<=p;i++){

        result=b*result;
    }
    printf("%d",result);
    return 0;
}
#include<stdio.h>

void fact(int n){

    int fact=1;

    int i;
    for(i=1;i<=n;i++){

        fact=fact*i;
    }
     printf("%d\n",fact);
     
 return ;
}

int main (){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

        fact(n);


    return 0;
}
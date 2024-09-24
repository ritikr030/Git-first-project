#include<stdio.h>

int fact(int n){
    
    if(n==1){
        return 1;
    }

    int mul=n*fact(n-1);
    return mul;

}

int main (){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int facto=fact(n);

    printf("%d",facto);

    return 0;
}
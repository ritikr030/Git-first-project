
#include<stdio.h>

void prime(int n){

int i;
    for( i=2;i<n;i++){

        if(n%i==0){
            printf("%d is not prime",n);
            break;
        }
    }

    if(i==n){
        printf("%d is prime ",n);
    }
    
    return ;
}


int main ( ){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    prime(n);

    return 0;
}
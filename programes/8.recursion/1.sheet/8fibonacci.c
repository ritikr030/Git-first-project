#include<stdio.h>

     int fib(int n){

        if(n==2 || n==1 ) return 1;

            int ans1= fib(n-1);

            int ans2= fib(n-2);

            int ans=ans1 + ans2;

            return ans;
     }

int main (){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

        printf("%d",fib(n));

    return 0;
}
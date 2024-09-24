#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int rem;

    while(n!=0){

        rem=n%10;

            if(rem%2!=0){
                printf("%d is odd\n",rem);
            }

        n=n/10;



    }

    return 0;
}